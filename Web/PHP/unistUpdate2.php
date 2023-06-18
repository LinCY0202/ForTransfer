<html lang="zh-TW">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet">
    <link href="https://getbootstrap.com/docs/5.3/assets/css/docs.css" rel="stylesheet">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"></script>
  </head>
  <body>
<?php
ini_set('display_errors', 'on');
error_reporting(E_ALL & ~E_NOTICE & ~E_WARNING);
include_once("db/01_conn.php");
$name = $_POST['name'];
$message = $_POST['message'];
$inputUnitlen = $_POST['inputUnitlen'];
$email = $_POST['email'];

try {
    $sql = "UPDATE units SET name=:name, message=:message, inputUnitlen=:inputUnitlen, email=:email";

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
        // 重定向到 test.php 
        header('Location: Utquery.php');
        exit;
    }
    if ($msg != '') echo $msg;
} catch (PDOException $e) {
    echo $e->getMessage() . "<br>\n";
}
?>
</body>
</html>
