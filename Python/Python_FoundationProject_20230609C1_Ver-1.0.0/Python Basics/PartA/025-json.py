"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-09
Update Date: 2023-07-09
Update Log:
    - Update the code
"""

import json

"""列表转json"""
data = [
    {"name": "jhon", "age": 11},
    {"name": "jne", "age": 13},
    {"name": "jn", "age": 15}
]
json_str = json.dumps(data, ensure_ascii=False)
print(type(json_str))
print(json_str)

"""json转列表"""
json_data = '[{"name": "jhon", "age": 11}, {"name": "jne", "age": 13}, {"name": "jn", "age": 15}]'

json_dic = json.loads(json_data)
print(type(json_dic))
print(json_dic)