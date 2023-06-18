<?php
ini_set('display_errors', 'on');
error_reporting(E_ALL & ~E_NOTICE & ~E_WARNING);
include_once("db/01_conn.php");
$tid = $_GET['tid'];
try {
    $sql = "delete from units where tid=" . $tid;
    $msg = '';

    $result = $connect->exec($sql);
    if ($result === false) {
        $msg = "fail delete. <br>\n";
    } else {
        $msg = "success delete. <br>\n";
    }
    if ($msg != '') {
        header('Location: index.htm');
        exit;
    }
} catch (PDOException $e) {
    echo $e->getMessage() . "<br>\n";
}
?>
