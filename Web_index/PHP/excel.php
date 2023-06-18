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
  //echo "数据库连接成功！";
} catch (PDOException $e) {
  echo "连接数据库时出错：" . $e->getMessage();
}

try {
  $sql = "SELECT * FROM conver";
  $stmt = $connect->query($sql);
  $data = $stmt->fetchAll(PDO::FETCH_ASSOC);

  // 设置响应头以提供下载链接
  header('Content-Type: application/csv');
  header('Content-Disposition: attachment; filename=data.csv');

  // 打开输出流，将数据写入 CSV 文件
  $output = fopen('php://output', 'w');

  // 写入 CSV 头部
  $header = array_keys($data[0]);
  fputcsv($output, $header);

  // 写入数据行
  foreach ($data as $row) {
    fputcsv($output, $row);
  }

  // 关闭输出流
  fclose($output);
} catch (PDOException $e) {
  echo $e->getMessage() . "<br>\n";
}
?>
