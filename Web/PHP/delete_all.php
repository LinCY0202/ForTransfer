<?php

include_once("db/01_conn.php");

// 執行全部刪除操作
$sql = "TRUNCATE TABLE conver";
$stmt = $connect->prepare($sql);
$stmt->execute();
?>
