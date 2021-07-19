//
//  GrowingTouchBannerData.h
//  GrowingTouchKit
//
//  Created by GrowingIO on 2019/8/29.
//  Copyright © 2019 com.growingio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GrowingTouchBannerParam : NSObject

/** 参数名称 */
@property (nonatomic, copy) NSString *param;
/** 显示名称 */
@property (nonatomic, copy) NSString *displayName;
/** 参数类型，包括 string 字符串、int 整形、float 浮点、percent 百分数、text 文本、date 日期 */
@property (nonatomic, copy) NSString *paramType;
/** 展示内容 */
@property (nonatomic, copy) id value;
@end


@interface GrowingTouchBannerItem : NSObject

/** 当前Item的名称 */
@property (nonatomic, copy) NSString *title;
/** 图片地址 */
@property (nonatomic, copy) NSString *imageUrl;
/** Item的索引，从0开始 */
@property (nonatomic, assign) NSUInteger index;
/** item包含的参数param数组 */
@property (nonatomic, strong) NSArray <GrowingTouchBannerParam *> *params;

/**
item 绑定视图
@param itemView item绑定的视图
@param completedBlock 绑定视图点击的回调
*/
- (void)bindItemDataToClickView:(UIView *)itemView selectCompleted:(void(^)(NSString *openUrl, NSError *error)) completedBlock;

@end

@interface GrowingTouchBannerData : NSObject

/** Banner名称 */
@property (nonatomic, copy) NSString *name;
/** Banner 唯一标识*/
@property (nonatomic, copy) NSString *bannerKey;
/** Banner每一个条目数据 */
@property (nonatomic, strong) NSArray <GrowingTouchBannerItem *> *items;

@end

