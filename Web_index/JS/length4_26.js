window.addEventListener("load", function() {
    const conversionRecordList = document.getElementById("conversionRecordList");
    const conversionRecords = JSON.parse(sessionStorage.getItem("conversionRecords")) || [];

    for (let i = 0; i < conversionRecords.length; i++) {
      const recordItem = document.createElement("li");
      recordItem.textContent = conversionRecords[i];
      conversionRecordList.appendChild(recordItem);
    }
  });
  
  

  function convertLength() {
    // 取得輸入值及單位
    const inputValue = parseFloat(document.getElementById("inputValuelen").value);
    const inputUnit = document.getElementById("inputUnitlen").value;
    const outputUnit = document.getElementById("outputUnitlen").value;
  
    // 建立單位對應表
    const unitTable = {
      km: 1000,
      m: 1,
      cm: 0.01,
      mm: 0.001,
      mi: 1609.344,
      yd: 0.9144,
      ft: 0.3048,
      in: 0.0254,
    };
  
    // 計算轉換結果
    const inputValueInMeter = inputValue * unitTable[inputUnit];
    const outputValue = inputValueInMeter / unitTable[outputUnit];
  
    // 顯示轉換結果
    const outputElement = document.getElementById("outputValuelen");
    document.getElementById("outputValuelen").innerHTML = outputValue + " " + outputUnit;

    // 將轉換記錄添加到 sessionStorage 中並顯示在列表中
    const conversionRecords = JSON.parse(sessionStorage.getItem("conversionRecords")) || [];
    const record = `${inputValue} ${inputUnit} 轉換為 ${outputValue} ${outputUnit}`;
    conversionRecords.push(record);
    sessionStorage.setItem("conversionRecords", JSON.stringify(conversionRecords));
    
    const conversionRecordList = document.getElementById("conversionRecordList");
    const recordItem = document.createElement("li");
    recordItem.textContent = record;
    conversionRecordList.appendChild(recordItem);
  
    // 使用 AJAX 傳送資料到後端
    sendDataToDatabase(outputValue); // 将outputValue作为参数传递给sendDataToDatabase函数
  }
  
  function sendDataToDatabase(outputValue) {
    const data = {
      inputValuelen: parseFloat(document.getElementById("inputValuelen").value),
      inputUnitlen: document.getElementById("inputUnitlen").value,
      outputUnitlen: document.getElementById("outputUnitlen").value,
      outputValuelen: outputValue, 
    };
  
    $.ajax({
      type: "POST",
      url: "book.php",
      data: data,
      success: function (response) {
        console.log("資料存入資料庫成功！");
      },
      error: function (xhr, status, error) {
        console.error("資料存入資料庫失敗：" + error);
      },
    });
  }
  
  
  


function convertVolume() {
  // 取得輸入值及單位
  const inputValue = parseFloat(document.getElementById("inputValueVol").value);
  const inputUnit = document.getElementById("inputUnitVol").value;
  const outputUnit = document.getElementById("outputUnitVol").value;
  
  // 建立單位對應表
  const unitTable = {
    "l": 1,
    "ml": 0.001,
    "gal": 3.78541,
    "oz": 0.0295735,
    "pt": 0.473176,
    "qt": 0.946353
  };
  
  // 計算轉換結果
  const inputValueInLiter = inputValue * unitTable[inputUnit];
  const outputValue = inputValueInLiter / unitTable[outputUnit];

  

  // 顯示轉換結果
  document.getElementById("outputValueVol").innerHTML = outputValue + " " + outputUnit;

  sendDataToDatabaseA(outputValue);
   // 將轉換記錄添加到 sessionStorage 中並顯示在列表中
    const conversionRecords = JSON.parse(sessionStorage.getItem("conversionRecords")) || [];
    const record = `${inputValue} ${inputUnit} 轉換為 ${outputValue} ${outputUnit}`;
    conversionRecords.push(record);
    sessionStorage.setItem("conversionRecords", JSON.stringify(conversionRecords));
    
    const conversionRecordList = document.getElementById("conversionRecordList");
    const recordItem = document.createElement("li");
    recordItem.textContent = record;
    conversionRecordList.appendChild(recordItem);
  

}
  function sendDataToDatabaseA(outputValue) {
    const data = {
      inputValuelen: parseFloat(document.getElementById("inputValueVol").value),
      inputUnitlen: document.getElementById("inputUnitVol").value,
      outputUnitlen: document.getElementById("outputUnitVol").value,
      outputValuelen: outputValue, 
    };

    $.ajax({
      type: "POST",
      url: "book.php",
      data: data,
      success: function (response) {
        console.log("資料存入資料庫成功！");
      },
      error: function (xhr, status, error) {
        console.error("資料存入資料庫失敗：" + error);
      },
    });
  }


function convertCurrency() {
  // 取得輸入值及貨幣單位
  const inputValue = parseFloat(document.getElementById("inputValue").value);
  const inputCurrency = document.getElementById("inputCurrency").value;
  const outputCurrency = document.getElementById("outputCurrency").value;

  // 呼叫 API 取得匯率
  fetch(`https://api.exchangerate-api.com/v4/latest/${inputCurrency}`)
      .then(response => response.json())
      .then(data => {
          // 計算轉換結果
          const exchangeRate = data.rates[outputCurrency];
          const outputValue = (inputValue * exchangeRate).toFixed(2);

          // 顯示轉換結果
          document.getElementById("outputValue").innerHTML = outputValue + " " + outputCurrency;
          
          sendDataToDatabaseB(outputValue);
          // 將轉換記錄添加到 sessionStorage 中並顯示在列表中

    const conversionRecords = JSON.parse(sessionStorage.getItem("conversionRecords")) || [];
    const record = `${inputValue} ${inputCurrency} 轉換為 ${outputValue} ${outputCurrency}`;
    conversionRecords.push(record);
    sessionStorage.setItem("conversionRecords", JSON.stringify(conversionRecords));
    
    const conversionRecordList = document.getElementById("conversionRecordList");
    const recordItem = document.createElement("li");
    recordItem.textContent = record;
    conversionRecordList.appendChild(recordItem);
      })
      .catch(error => {
          console.error(error);
          
      });

}
function sendDataToDatabaseB(outputValue) {
  const data = {
    inputValuelen: parseFloat(document.getElementById("inputValue").value),
    inputUnitlen: document.getElementById("inputCurrency").value,
    outputUnitlen: document.getElementById("outputCurrency").value,
    outputValuelen: outputValue, 
  };

  $.ajax({
    type: "POST",
    url: "book.php",
    data: data,
    success: function (response) {
      console.log("資料存入資料庫成功！");
    },
    error: function (xhr, status, error) {
      console.error("資料存入資料庫失敗：" + error);
    },
  });
}

function convertTemperature() {
    // 取得使用者輸入的數量和溫度單位
    var input = parseFloat(document.getElementById("inputValuetem").value);
    var inputUnit = document.getElementById("inputUnittem").value;
    var outputUnit = document.getElementById("outputUnittem").value;
    // 計算轉換後的數量
    var output;
    if (inputUnit == "C" && outputUnit=="F") {
        output = input * 9 / 5 + 32; // 攝氏轉華氏公式
    } else if (inputUnit == "F" && outputUnit=="C") {
        output = (input - 32) * 5 / 9; // 華氏轉攝氏公式
    }
    else{
        output=input;
    }
    // 將轉換後的數量顯示在網頁上
    document.getElementById("outputValuetem").innerHTML = output.toFixed(2) + " " + outputUnit;
    
    sendDataToDatabaseC(output);
        // 將轉換記錄添加到 sessionStorage 中並顯示在列表中
        const conversionRecords = JSON.parse(sessionStorage.getItem("conversionRecords")) || [];
        const record = `${input} ${inputUnit} 轉換為 ${output} ${outputUnit}`;
        conversionRecords.push(record);
        sessionStorage.setItem("conversionRecords", JSON.stringify(conversionRecords));
        
        const conversionRecordList = document.getElementById("conversionRecordList");
        const recordItem = document.createElement("li");
        recordItem.textContent = record;
        conversionRecordList.appendChild(recordItem);
}
function sendDataToDatabaseC(outputValue) {
  const data = {
    inputValuelen: parseFloat(document.getElementById("inputValuetem").value),
    inputUnitlen: document.getElementById("inputUnittem").value,
    outputUnitlen: document.getElementById("outputUnittem").value,
    outputValuelen: outputValue, 
  };

  $.ajax({
    type: "POST",
    url: "book.php",
    data: data,
    success: function (response) {
      console.log("資料存入資料庫成功！");
    },
    error: function (xhr, status, error) {
      console.error("資料存入資料庫失敗：" + error);
    },
  });
}


window.addEventListener("scroll", function() {
  if (window.pageYOffset > 100) {
    document.querySelector(".menu").style.top = "0";
  } else {
    document.querySelector(".menu").style.top = 100 - window.pageYOffset + "px";
  }
});
window.addEventListener("scroll", function() {
    if (window.pageYOffset > 100) {
      document.querySelector(".record-container").style.top = "0";
    } else {
      document.querySelector(".record-container").style.top = 100 - window.pageYOffset + "px";
    }
  });

function updateTime() {
    var date = new Date();
    var options = {
      timeZone: document.getElementById("timezone").value, // 從下拉選單中獲取時區
      hour12: false,
      weekday: "long",
      year: "numeric",
      month: "long",
      day: "numeric",
      hour: "numeric",
      minute: "numeric",
      second: "numeric"
    };
    var timeString = date.toLocaleString("en-US", options);
    document.getElementById("current-time").textContent = timeString;
  }
  setInterval(updateTime, 1000);



  function addListItem() {
    var input = document.getElementById("new-item-input");
    var value = input.value.trim();
  
    if (value === "") {
      alert("請輸入項目名稱！");
      return;
    }
  
    var content = document.querySelector(".content");
    var list = document.getElementById("menu-list");
    var newItem = document.createElement("li");
    var link = document.createElement("a");
    var newContent = document.createElement("div");
    var newId = "section" + (list.children.length + 1);
    newContent.id = newId;
    var h2 = document.createElement("h2");
    var p = document.createElement("p");
  
    link.href = "#" + newId;
    link.textContent = value;
    newItem.appendChild(link);
    list.appendChild(newItem);


    h2.textContent = value;
    
    p.textContent = "這裡放" + value + "的單位";
    newContent.appendChild(h2);
    newContent.appendChild(p);
    content.appendChild(newContent);
  
    input.value = "";
  
    // 為新內容區塊添加點擊事件處理函數
    link.addEventListener("click", function(event) {
      event.preventDefault();
      // 顯示對應的內容區塊
      document.getElementById(newId).style.display = "block";
    });
  }
  

  
  
  
  
  
  
  
  