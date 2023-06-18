<!DOCTYPE html>
<html>
<head>
    <title>EmailJS Example</title>

    <script src="https://cdn.emailjs.com/sdk/2.4.1/email.min.js"></script>
    <script>
        (function(){
            emailjs.init("As4Ruwh1ihSPbFGTI3MIp");
        })();
        
        function sendEmail() {
            event.preventDefault(); // 阻止表单提交默认行为

            // 获取表单数据
            var name = document.getElementById('name').value;
            var message = document.getElementById('message').value;
            var inputUnitlen = document.getElementById('inputUnitlen').value;
            var email = document.getElementById('email').value;

            // 发送邮件
            emailjs.send("YOUR_SERVICE_ID", "YOUR_TEMPLATE_ID", {
                name: name,
                message: message,
                inputUnitlen: inputUnitlen,
                email: email
            }, "YOUR_USER_ID")
            .then(function(response) {
                console.log("邮件发送成功", response);
                alert("邮件已发送");
            }, function(error) {
                console.log("邮件发送失败", error);
                alert("邮件发送失败：" + error);
            });
        }
    </script>
</head>
<body>
</body>
</html>