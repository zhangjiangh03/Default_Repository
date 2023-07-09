"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-09
Update Date: 2023-07-09
Update Log:
    - Update the code
"""

from pyecharts.charts import Line
from pyecharts.options import TitleOpts, LegendOpts, ToolboxOpts

"""全局配置"""
line = Line()
line.add_xaxis(["中国", "他国"])
line.add_yaxis("GDP", [20, 10])

line.set_global_opts(
    title_opts=TitleOpts(title="标题", pos_left="center", pos_top="0%"),
    legend_opts=LegendOpts(is_show=True),
    toolbox_opts=ToolboxOpts(is_show=True),
)

line.render()