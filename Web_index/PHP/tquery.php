<html lang="zh-TW">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet">
    <link href="https://getbootstrap.com/docs/5.3/assets/css/docs.css" rel="stylesheet">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
<script>
  function deleteItem(tid) {
    $.ajax({
      type: "GET",
      url: "delt.php",
      data: { tid: tid },
      success: function(response) {
        // 重新載入目前的頁面以刷新表格
        location.reload();
      }
    });
  }
  function goToHomePage() {
    window.location.href = "index.htm"; // 將 "index.php" 替換為你的首頁 URL
  }
  function deleteAllItems() {
  if (confirm("確定要全部刪除嗎？")) {
    $.ajax({
      type: "GET",
      url: "delete_all.php",
      success: function(response) {
        // 重新載入目前的頁面以刷新表格
        location.reload();
      }
    });
  }
}
function downloadExcel() {
    var inputValue = document.getElementById("inputValue").value;
    var inputUnit = document.getElementById("inputUnit").value;
    var outputValue = document.getElementById("outputValue").value;
    var outputUnit = document.getElementById("outputUnit").value;
  
    // 構建下載連結
    var downloadLink = "excel.php?";
    if (inputValue !== "") {
      downloadLink += "inputValue=" + encodeURIComponent(inputValue) + "&";
    }
    if (inputUnit !== "") {
      downloadLink += "inputUnit=" + encodeURIComponent(inputUnit) + "&";
    }
    if (outputValue !== "") {
      downloadLink += "outputValue=" + encodeURIComponent(outputValue) + "&";
    }
    if (outputUnit !== "") {
      downloadLink += "outputUnit=" + encodeURIComponent(outputUnit) + "&";
    }
  
    // 將連結指向新的下載地址
    window.location.href = downloadLink;
  }
  


</script>

  </head>
  <body>
  <button type="button" class="btn btn-primary" onclick="goToHomePage()">返回首頁</button>
    <div class="container">
      <h1>資料篩選</h1>
      <form method="GET" action="" class="mb-4">
        <div class="row">
          <div class="col-md-3 mb-3">
            <label for="inputValue" class="form-label">輸入</label>
            <input type="text" class="form-control" id="inputValue" name="inputValue">
          </div>
          <div class="col-md-3 mb-3">
            <label for="inputUnit" class="form-label">輸入單位</label>
            <input type="text" class="form-control" id="inputUnit" name="inputUnit">
          </div>
          <div class="col-md-3 mb-3">
            <label for="outputValue" class="form-label">輸出</label>
            <input type="text" class="form-control" id="outputValue" name="outputValue">
          </div>
          <div class="col-md-3 mb-3">
            <label for="outputUnit" class="form-label">輸出單位</label>
            <input type="text" class="form-control" id="outputUnit" name="outputUnit">
          </div>
        </div>
        <div class="text-center">
          <button type="submit" class="btn btn-primary">篩選</button>
        </div>
      </form>

      <h1>資料表格</h1>
      <table class="table table-striped table-hover">
        <thead>
          <tr>
            <th scope="col">刪除</th>
            <th scope="col">input_value</th>
            <th scope="col">input_unit</th>
            <th scope="col">output_value</th>
            <th scope="col">output_unit</th>
          </tr>
        </thead>
        <tbody>
        <?php
        // 包含数据库连接文件
        include_once("db/01_conn.php");

        // 構建 SQL 查詢語句
        $sql = "SELECT * FROM conver";
        
        // 構建 WHERE 子句
        $whereClause = "";

        // 檢查篩選條件並構建 WHERE 子句
        if(isset($_GET['inputValue']) && !empty($_GET['inputValue'])) {
          $inputValue = $_GET['inputValue'];
          $whereClause .= "input_value LIKE '%$inputValue%' AND ";
        }
        if(isset($_GET['inputUnit']) && !empty($_GET['inputUnit'])) {
          $inputUnit = $_GET['inputUnit'];
          $whereClause .= "input_unit LIKE '%$inputUnit%' AND ";
        }
        if(isset($_GET['outputValue']) && !empty($_GET['outputValue'])) {
          $outputValue = $_GET['outputValue'];
          $whereClause .= "output_value LIKE '%$outputValue%' AND ";
        }
        if(isset($_GET['outputUnit']) && !empty($_GET['outputUnit'])) {
          $outputUnit = $_GET['outputUnit'];
          $whereClause .= "output_unit LIKE '%$outputUnit%' AND ";
        }

        // 移除 WHERE 子句末尾的 "AND "
        $whereClause = rtrim($whereClause, "AND ");

        // 構建最終的 SQL 查詢語句
        if (!empty($whereClause)) {
          $sql .= " WHERE " . $whereClause;
        }

        // 按照 tid 降序排列
        $sql .= " ORDER BY tid DESC";

        // 執行查詢
        $result = $connect->query($sql);

        // 循環輸出每一行數據
        while ($row = $result->fetch(PDO::FETCH_ASSOC)) {
          echo "<tr>";
          echo "<td><button type='button' class='btn btn-danger' onclick='deleteItem(" . $row['tid'] . ")'>刪除</button></td>";
          echo "<td>" . $row['input_value'] . "</td>";
          echo "<td>" . $row['input_unit'] . "</td>";
          echo "<td>" . $row['output_value'] . "</td>";
          echo "<td>" . $row['output_unit'] . "</td>";
          echo "</tr>";
        }
        ?>
      </tbody>
    </table>
    <button type="button" class="btn btn-primary" onclick="downloadExcel()">下載</button>
    <button type="button" class="btn btn-danger" onclick="deleteAllItems()">全部刪除</button>
  </body>
</html>