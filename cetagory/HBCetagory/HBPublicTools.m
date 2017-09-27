//
//  HBPublicTools.m
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import "HBPublicTools.h"

@implementation HBPublicTools

/**
 大数据精确除法
 @param subtotal 除数
 @param discount 被除数
 @return 商保留3位小数
 */
+ (NSString *)decimalNumberWithSubtotal:(NSString *)subtotal discount:(NSString *)discount
{
//    NSRoundPlain,   // Round up on a tie ／／貌似取整 翻译出来是个圆 吗的垃圾百度翻译
//    NSRoundDown,    // Always down == truncate  ／／只舍不入
//    NSRoundUp,      // Always up    ／／ 只入不舍
//    NSRoundBankers  // on a tie round so last digit is even  貌似四舍五入
    NSDecimalNumberHandler *roundDown = [NSDecimalNumberHandler
                                       decimalNumberHandlerWithRoundingMode:NSRoundDown
                                       scale:3
                                       raiseOnExactness:NO
                                       raiseOnOverflow:NO
                                       raiseOnUnderflow:NO
                                       raiseOnDivideByZero:YES];
    
    NSDecimalNumber *number = [NSDecimalNumber decimalNumberWithString:subtotal];
    NSDecimalNumber *count = [NSDecimalNumber decimalNumberWithString:discount];
    NSDecimalNumber *result = [number decimalNumberByDividingBy:count withBehavior:roundDown];
    return [NSString stringWithFormat:@"%.3lf",result.doubleValue];
}
/**
 精确乘法
 
 @param subtotal 乘数
 @param discount 乘数
 @return 积保留2位小数
 */
+ (NSString *)MultiplyingNumberWithSubtotal:(NSString *)subtotal discount:(NSString *)discount
{
    //保留小数点后两位
    NSDecimalNumberHandler *roundUp = [NSDecimalNumberHandler
                                       decimalNumberHandlerWithRoundingMode:NSRoundBankers
                                       scale:2
                                       raiseOnExactness:NO
                                       raiseOnOverflow:NO
                                       raiseOnUnderflow:NO
                                       raiseOnDivideByZero:YES];
    
    NSDecimalNumber *number = [NSDecimalNumber decimalNumberWithString:subtotal];
    NSDecimalNumber *count = [NSDecimalNumber decimalNumberWithString:discount];
    
    NSDecimalNumber*total = [number decimalNumberByMultiplyingBy:count
                                                    withBehavior:roundUp];
    
    return [NSString stringWithFormat:@"%.2lf",total.doubleValue];
    
}
+ (NSInteger)hb_randomNumber:(NSInteger)from to:(NSInteger)to
{
    return (NSInteger)(from + (arc4random() % (to - from + 1)));
}
@end
