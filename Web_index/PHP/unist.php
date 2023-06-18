<?php
ini_set('display_errors', 'on');
error_reporting(E_ALL & ~E_NOTICE & ~E_WARNING);

// 建立数据库连接
$db_host = "mysql:host=210.240.170.251;dbname=s43";
$db_user = "***";
$db_password = "******";
try {
    $connect = new PDO($db_host, $db_user, $db_password);
    $connect->exec("SET NAMES utf8");
    $connect->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $e) {
    echo "连接数据库时出错：" . $e->getMessage();
}

$name = $_POST['name'];
$message = $_POST['message'];
$inputUnitlen = $_POST['inputUnitlen'];
$email = $_POST['email'];

try {
    $sql = "INSERT INTO units(name, message, inputUnitlen, email) VALUES
    (:name, :message, :inputUnitlen, :email)";

    $stmt = $connect->prepare($sql);
    $stmt->bindParam(':name', $name);
    $stmt->bindParam(':message', $message);
    $stmt->bindParam(':inputUnitlen', $inputUnitlen);
    $stmt->bindParam(':email', $email);

    $result = $stmt->execute();
    if ($result === false) {
        $msg = "Fail insert. <br>\n";
    } else {
        $msg = "Success insert. <br>\n";
        // 重定向到 test.php 页面
        header('Location: Utquery.php');
        exit;
    }
    if ($msg != '') echo $msg;
} catch (PDOException $e) {
    echo $e->getMessage() . "<br>\n";
}
?>
