<?php
ini_set('display_errors', 'on');
error_reporting(E_ALL & ~E_NOTICE & ~E_WARNING);

// 建立数据库连接
$db_host = "mysql:host=210.240.170.251;dbname=s43";
$db_user = "******";
$db_password = "******";
try {
  $connect = new PDO($db_host, $db_user, $db_password);
  $connect->exec("SET NAMES utf8");
  $connect->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $e) {
  echo "连接数据库时出错：" . $e->getMessage();
}

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

try {
  // 執行查詢
  $stmt = $connect->query($sql);
  if ($stmt->rowCount() > 0) {
    $data = $stmt->fetchAll(PDO::FETCH_ASSOC);

    // 設置響應頭以提供下載連結
    $filename = "data.csv";
    if (!empty($inputValue)) {
        $filename = "data_inputValue_$inputValue.csv";
    }
    header('Content-Type: application/csv');
    header('Content-Disposition: attachment; filename=' . $filename);

    // 打開輸出流，將數據寫入 CSV 文件
    $output = fopen('php://output', 'w');

    // 寫入 CSV 頭部
    $header = array_keys($data[0]);
    fputcsv($output, $header);

    // 寫入數據行
    foreach ($data as $row) {
      fputcsv($output, $row);
    }

    // 關閉輸出流
    fclose($output);
  } else {
    echo "沒有符合篩選條件的資料";
    exit;
  }
} catch (PDOException $e) {
  echo $e->getMessage() . "<br>\n";
}
?>
