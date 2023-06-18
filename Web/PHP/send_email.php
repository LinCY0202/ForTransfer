<!DOCTYPE html>
<html>
<head>
    <title>EmailJS示例</title>

    <script src="https://cdn.emailjs.com/sdk/2.4.1/email.min.js"></script>
    <script>
        (function(){
            emailjs.init("As4Ruwh1ihSPbFGTI3MIp");
        })();
        
        function sendEmail() {
            event.preventDefault(); // 阻止表單提交預設行為

            // 獲取表單數據
            var name = document.getElementById('name').value;
            var message = document.getElementById('message').value;
            var inputUnitlen = document.getElementById('inputUnitlen').value;
            var email = document.getElementById('email').value;

            // 發送郵件
            emailjs.send("YOUR_SERVICE_ID", "YOUR_TEMPLATE_ID", {
                name: name,
                message: message,
                inputUnitlen: inputUnitlen,
                email: email
            }, "YOUR_USER_ID")
            .then(function(response) {
                console.log("郵件發送成功", response);
                alert("郵件已發送");
            }, function(error) {
                console.log("郵件發送失敗", error);
                alert("郵件發送失敗：" + error);
            });
        }
    </script>
</head>
<body>
</body>
</html>
