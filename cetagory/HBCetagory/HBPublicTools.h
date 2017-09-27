//
//  HBPublicTools.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HBPublicTools : NSObject

/**
 大数据精确除法
 @param subtotal 除数
 @param discount 被除数
 @return 商保留3位小数
 */
+ (NSString *)decimalNumberWithSubtotal:(NSString *)subtotal discount:(NSString *)discount;

/**
 精确乘法

 @param subtotal 乘数
 @param discount 乘数
 @return 积保留2位小数
 */
+ (NSString *)MultiplyingNumberWithSubtotal:(NSString *)subtotal discount:(NSString *)discount;

// 获取 [to from] 之间的数据
+ (NSInteger)hb_randomNumber:(NSInteger)from to:(NSInteger)to;
@end
