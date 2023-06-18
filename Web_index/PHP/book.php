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
    $msg = "Fail insert. <br>\n";
  } else {
    $msg = "Success insert. <br>\n";
  }
  if ($msg != '') echo $msg;
} catch (PDOException $e) {
  echo $e->getMessage() . "<br>\n";
}
?>
