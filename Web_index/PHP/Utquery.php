<!DOCTYPE html>
<html lang="zh-TW">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <script src='https://www.google.com/recaptcha/api.js'></script>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css">
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
  <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>

  <style>
    body {
      padding: 20px;
    }
    table {
      width: 100%;
      margin-bottom: 1rem;
      color: #212529;
    }
    th {
      text-align: center;
      font-weight: 600;
      background-color: #f8f9fa;
    }
    td {
      text-align: center;
    }
    .btn-primary {
      background-color: #007bff;
      border-color: #007bff;
    }
    .btn-primary:hover {
      background-color: #0069d9;
      border-color: #0062cc;
    }
  </style>
   <script src="https://cdn.emailjs.com/dist/email.min.js"></script>
   <script>

        function verifyRecaptcha() {
            var token = grecaptcha.getResponse();
            
            if (!token) {
              alert("請完成機器人驗證");
              return false; // 驗證失敗，阻止表單提交
            }
            
            // 使用 AJAX 或其他方式將 token 傳遞到後端進行 reCAPTCHA 驗證
            // 在後端進行驗證的程式碼可以參考之前提供的 `recaptchaCheck()` 函式
            
            // 若驗證成功，可繼續執行表單提交
            return true;
          }
          function deleteAllItems() {
            $.ajax({
              type: "GET",
              url: "delete_all_U.php",
              success: function(response) {
                // 重定向到 index.htm 页面
                window.location.href = "Cservice.htm";
              },
              error: function(error) {
                console.log('刪除數據失敗：', error);
                alert("刪除數據失敗，請重試！");
              }
            });
          }

        function sendEmail(tid, name, message, inputUnitlen, email) {
          var encodedMessage = encodeURIComponent(message);

          emailjs.init("DdQrqsVfy5DPAaVIe"); // 
          var templateParams = {
            tid: tid,
            name: name,
            message: encodedMessage,
            inputUnitlen: inputUnitlen,
            email: decodeURIComponent(email)
          };

          emailjs.send('gmail', 'template_n4s35pj', templateParams)
            .then(async function(response) {
              console.log('發送郵件成功：', response);
              alert("發送郵件成功！");
              deleteAllItems();
            })
            .catch(function(error) {
              console.log('郵件發送失敗：', error);
              alert("郵件發送失敗，請確認email是否正確！");
            });
        }
        function verifyRecaptchaAndSendEmail(tid, name, message, inputUnitlen, email) {
          if (!verifyRecaptcha()) {
            return; // 如果机器人验证失败，不执行发送邮件操作
          }

          sendEmail(tid, name, message, inputUnitlen, email);
        }

        

        

</script>


</head>
<body>
  <div class="container">
    <table class="table table-striped table-hover">
      <thead>
        <tr>
          <th scope="col">送出</th>
          <th scope="col">修改</th>
          <th scope="col">Unit</th>
          <th scope="col">message</th>
          <th scope="col">options</th>
          <th scope="col">email</th>
        </tr>
      </thead>
      <tbody>
        <?php
        // 包含数据库连接文件
        include_once("db/01_conn.php");

        // 查询数据库中的数据
        $sql = "SELECT * FROM units ORDER BY tid DESC";
        $result = $connect->query($sql);

        // 循环输出每一行数据
        while ($row = $result->fetch(PDO::FETCH_ASSOC)) {
          echo "<tr>";
          echo "<td><a href=\"#\" onclick=\"verifyRecaptchaAndSendEmail('" . $row['tid'] . "', '" . urlencode($row['name']) . "', '" . urlencode($row['message']) . "', '" . urlencode($row['inputUnitlen']) . "', '" . urlencode($row['email']) . "');\" class=\"btn btn-primary\">送出</a></td>";

          echo "<td><a href=\"unistUpdate.php?tid=" . $row['tid'] . "\" class=\"btn btn-primary\">修改</a></td>";
          echo "<td>" . $row['name'] . "</td>";
          echo "<td>" . $row['message'] . "</td>";
          echo "<td>" . $row['inputUnitlen'] . "</td>";
          echo "<td>" . $row['email'] . "</td>";
          echo "</tr>";
      }
      
        ?>
      </tbody>
    </table>
    <div class="g-recaptcha" data-sitekey="6LfIQg8mAAAAAKGvZBUM0VSR7S5tXCjH6WkGu1En"></div>
  </div>
</body>
</html>
