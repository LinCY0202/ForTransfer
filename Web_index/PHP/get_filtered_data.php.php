<?php
// 包含数据库连接文件
include_once("db/01_conn.php");

// 获取筛选参数
$inputValue = $_GET['inputValue'];
$inputUnit = $_GET['inputUnit'];
$outputValue = $_GET['outputValue'];
$outputUnit = $_GET['outputUnit'];

// 构建 SQL 查询语句
$sql = "SELECT * FROM conver WHERE 1=1";

// 构建 WHERE 子句
$whereClause = "";

// 检查筛选条件并构建 WHERE 子句
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

// 添加 WHERE 子句到查询语句中
$sql .= $whereClause;

// 执行查询
$result = $connect->query($sql);

// 构建结果数组
$data = array();

// 循环输出每一行数据
while ($row = $result->fetch(PDO::FETCH_ASSOC)) {
  $data[] = $row;
}

// 返回筛选后的数据
echo json_encode($data);
?>
