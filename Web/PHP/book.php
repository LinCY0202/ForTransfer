<?php
ini_set('display_errors', 'on');
error_reporting(E_ALL & ~E_NOTICE & ~E_WARNING);

// 建立資料庫連線
$db_host = "mysql:host=210.240.170.251;dbname=s43";
$db_user = "******";
$db_password = "******";
try {
  $connect = new PDO($db_host, $db_user, $db_password);
  $connect->exec("SET NAMES utf8");
  $connect->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
  //echo "資料庫連線成功！";
} catch (PDOException $e) {
  echo "連線資料庫時出錯：" . $e->getMessage();
}

$input_value = $_POST['inputValuelen'];
$input_unit = $_POST['inputUnitlen'];
$output_unit = $_POST['outputUnitlen'];
$output_value = $_POST['outputValuelen'];

try {
  $sql = "INSERT INTO conver(input_value, input_unit, output_unit, output_value) VALUES
  (:input_value, :input_unit, :output_unit, :output_value)";

  $stmt = $connect->prepare($sql);
  $stmt->bindParam(':input_value', $input_value);
  $stmt->bindParam(':input_unit', $input_unit);
  $stmt->bindParam(':output_unit', $output_unit);
  $stmt->bindParam(':output_value', $output_value);
  
  $result = $stmt->execute();
  if ($result === false) {
    $msg = "插入失敗。 <br>\n";
  } else {
    $msg = "插入成功。 <br>\n";
  }
  if ($msg != '') echo $msg;
} catch (PDOException $e) {
  echo $e->getMessage() . "<br>\n";
}
?>
