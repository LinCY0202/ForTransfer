<?php
ini_set('display_errors', 'on');
error_reporting(E_ALL & ~E_NOTICE & ~E_WARNING);


$db_host = "mysql:host=210.240.170.251;dbname=s43";
$db_user = "******";
$db_password = "******";
try {
  $connect = new PDO($db_host, $db_user, $db_password);
  $connect->exec("SET NAMES utf8");
  $connect->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

} catch (PDOException $e) {
  echo "連結數據庫出錯：" . $e->getMessage();
}

try {
  $sql = "SELECT * FROM conver";
  $stmt = $connect->query($sql);
  $data = $stmt->fetchAll(PDO::FETCH_ASSOC);


  header('Content-Type: application/csv');
  header('Content-Disposition: attachment; filename=data.csv');


  $output = fopen('php://output', 'w');


  $header = array_keys($data[0]);
  fputcsv($output, $header);


  foreach ($data as $row) {
    fputcsv($output, $row);
  }


  fclose($output);
} catch (PDOException $e) {
  echo $e->getMessage() . "<br>\n";
}
?>
