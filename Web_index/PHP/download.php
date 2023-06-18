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

// 儲存下載的資料
$downloadData = '';

// 循環輸出每一行數據並儲存到 $downloadData 變數中
while ($row = $result->fetch(PDO::FETCH_ASSOC)) {
  $downloadData .= $row['input_value'] . "\t" . $row['input_unit'] . "\t" . $row['output_value'] . "\t" . $row['output_unit'] . "\n";
}

// 設定下載檔案的標頭資訊
header("Content-type: application/octet-stream");
header("Content-Disposition: attachment; filename=data.csv");

// 將資料輸出到下載檔案
echo $downloadData;
exit;
?>
