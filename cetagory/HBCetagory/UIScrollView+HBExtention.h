//
//  UIScrollView+HBExtention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (HBExtention)
/// 添加下拉刷新控件
- (MJRefreshNormalHeader *)hb_addHeaderRefresh:(void(^)(MJRefreshNormalHeader *header))refreshingBlock;
/// 添加上拉加载控件
- (MJRefreshAutoNormalFooter *)hb_addFooterRefresh:(void(^)(MJRefreshAutoNormalFooter *footer))refreshingBlock;

@end
