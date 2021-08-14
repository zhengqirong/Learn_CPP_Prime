### 2021.8.14
使用了头文件，但是遇到了问题:编译时找不到头文件
最后在tasks.json中修改了以下部分就可以了
```
"${workspaceFolder}\\*.cpp" instead of ${file}
```

编译命令：
```
g++ -o {输出文件名} {cpp文件1 cpp文件2}
```

读到了第二章。
