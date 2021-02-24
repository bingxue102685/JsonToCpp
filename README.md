# JsonToCpp
convert json file to cpp class
## 运行说明
使用本软件，json文件需要遵守如下两个预定：
1. 请确保传入的json文件没有格式错误！
2. json数组(array)中的数据结构必须相同！
3. json对象(object)的key必须为英文！
如运行不起来，可issues。
## 测试
工程下的json文件夹中有一个json文件，可供测试。output问价夹下是对应生成的.h文件。供参考！ 

## 依赖库
生成的.h文件依赖[nlohmann](https://github.com/nlohmann/json)，关于这个库，不再详解，自行翻阅，很强大。

## 优势
可配合[nlohmann](https://github.com/nlohmann/json)，自动对json文件反序列化，c++的数据结构也可以自动序列化为nlohmann::json，方便发送或者存入本地。

## 简单使用
```cpp
//根据 alg_param_setting.json 自动生成的 alg_param_setting.h
#include "output\alg_param_setting.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace alg_param_setting;
using nlohmannJson = nlohmann::json;

QFile originJsonFile(QDir::currentPath() + QString::fromStdWString(L"/json/alg_param_setting.json"));
if (!originJsonFile.open(QIODevice::ReadOnly))
	return;
QByteArray originJsonPlainText = originJsonFile.readAll();
originJsonFile.close();

//先把json文件解析出来
auto jsonObject = nlohmannJson::parse(originJsonPlainText.toStdString());

//只需简单一句代码，即可进行反序列化
auto p2 = jsonObject.get<struct_alg_param_setting>();

//只需简单一句代码，即可进行序列化
nlohmannJson p3 = p2;

//写入本地
std::ofstream o(QDir::currentPath().toStdString() + "/pretty.json");
o << std::setw(4) << p3 << std::endl;
o.close()
```
## 后续
还可以进行很多扩展和定制化，如需源码，邮箱联系：gamerzhj@163.com
