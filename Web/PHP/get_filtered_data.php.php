<?php
// 包含資料庫連接檔案
include_once("db/01_conn.php");

// 獲取篩選參數
$inputValue = $_GET['inputValue'];
$inputUnit = $_GET['inputUnit'];
$outputValue = $_GET['outputValue'];
$outputUnit = $_GET['outputUnit'];

// 構建 SQL 查詢語句
$sql = "SELECT * FROM conver WHERE 1=1";

// 構建 WHERE 子句
$whereClause = "";

// 檢查篩選條件並構建 WHERE 子句
if (!empty($inputValue)) {
  $whereClause .= " AND input_value LIKE '%$inputValue%'";
}
if (!empty($inputUnit)) {
  $whereClause .= " AND input_unit LIKE '%$inputUnit%'";
}
if (!empty($outputValue)) {
  $whereClause .= " AND output_value LIKE '%$outputValue%'";
}
if (!empty($outputUnit)) {
  $whereClause .= " AND output_unit LIKE '%$outputUnit%'";
}

// 添加 WHERE 子句到查詢語句中
$sql .= $whereClause;

// 執行查詢
$result = $connect->query($sql);

// 構建結果陣列
$data = array();

// 循環輸出每一行資料
while ($row = $result->fetch(PDO::FETCH_ASSOC)) {
  $data[] = $row;
}

// 返回篩選後的資料
echo json_encode($data);
?>
