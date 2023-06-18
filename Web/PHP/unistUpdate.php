<!DOCTYPE html>
<html lang="zh-TW">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css">
  <style>
    body {
      background-color: #f8f9fa;
      padding: 20px;
    }
    .container {
      max-width: 500px;
      margin: auto;
      background-color: #ffffff;
      border-radius: 5px;
      padding: 20px;
      box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
    }
    h1 {
      text-align: center;
      margin-bottom: 30px;
      color: #007bff;
    }
    .form-group {
      margin-bottom: 20px;
    }
    label {
      font-weight: bold;
      color: #555555;
    }
    .btn-primary {
      background-color: #007bff;
      border-color: #007bff;
    }
    .btn-primary:hover {
      background-color: #0069d9;
      border-color: #0062cc;
    }
  </style>
</head>
<body>
  <div class="container">
    <h1>單位換算客服信箱-修改</h1>
    <form action="unistUpdate2.php" method="post">
    <p class="reminder">輸入以英文為佳，中文在寄件過程會有亂碼</p>
      <div class="form-group">
        <label for="name">新增單位</label>
        <input type="text" class="form-control" id="name" name="name" placeholder="請輸入單位" required>
      </div>

      <div class="form-group">
        <label for="message">單位權重</label>
        <textarea class="form-control" id="message" name="message" rows="5" placeholder="請輸入問題" required></textarea>
      </div>

      <div class="form-group">
        <label for="inputUnitlen">類別：</label>
        <select class="form-select" id="inputUnitlen" name="inputUnitlen" required>
          <option value="">選擇類別</option>
          <option>Normal</option>
          <option>Other</option>
        </select>
      </div>

      <div class="form-group">
        <label for="email">電子郵件：</label>
        <input type="email" class="form-control" id="email" name="email" placeholder="請輸入電子郵件" required>
      </div>

      <div class="text-center">
        <input type="submit" class="btn btn-primary" value="送出">
      </div>
    </form>
  </div>
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"></script>
</body>
</html>
