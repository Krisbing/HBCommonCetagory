//
//  NSDate+HBExtention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <Foundation/Foundation.h>

#define HB_D_MINUTE	    60
#define HB_D_HOUR		3600
#define HB_D_DAY		86400
#define HB_D_WEEK		604800
#define HB_D_YEAR		31556926

@interface NSDate (HBExtention)

/**
 *  是否为今天
 */
- (BOOL)hb_isToday;
/**
 *  是否为昨天
 */
- (BOOL)hb_isYesterday;
/**
 *  是否为今年
 */
- (BOOL)hb_isThisYear;
/**
 *  是否本周
 */
- (BOOL)hb_isThisWeek;

/**
 *  星期几
 */
- (NSString *)hb_weekDay;

/**
 *  是否为在相同的周
 */
- (BOOL)hb_isSameWeekWithAnotherDate: (NSDate *)anotherDate;


/**
 *  通过一个时间 固定的时间字符串 "2016/8/10 14:43:45" 返回时间
 *  @param timestamp 固定的时间字符串 "2016/8/10 14:43:45"
 */
+ (instancetype)hb_dateWithTimestamp:(NSString *)timestamp;

/**
 *  返回固定的 当前时间 2016-8-10 14:43:45
 */
+ (NSString *)hb_currentTimestamp;

/**
 *  返回一个只有年月日的时间
 */
- (NSDate *)hb_dateWithYMD;

/**
 * 格式化日期描述
 */
- (NSString *)hb_formattedDateDescription;

/** 与当前时间的差距 */
- (NSDateComponents *)hb_deltaWithNow;


@end
