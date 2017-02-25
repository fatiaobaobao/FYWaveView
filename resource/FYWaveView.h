//
//  FYWaveView.h
//  FYAgent
//
//  Created by 曹运 on 16/8/29.
//  Copyright © 2016年 Foryou. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface FYWaveView : UIView
@property (assign, nonatomic) CGFloat angularSpeed;//角度变化速度 /秒 控制一个正弦曲线的宽度
@property (assign, nonatomic) CGFloat waveSpeed; //波浪前进速度 /秒  变化的是 sin(waveSpeed) 就是上下浮动更快了
@property (assign, nonatomic) NSInteger waveNumber;//波浪数（正弦曲线数）
@property (assign, nonatomic) NSTimeInterval waveTime; //波浪翻滚时间 默认0 永动
@property (strong, nonatomic) UIColor *waveColor; //波浪线条颜色 默认白色 透明度0.3
@property (strong, nonatomic) UIColor *waveShaDowColor;//波浪下部阴影颜色 默认白色 透明度0.1
@property (assign, nonatomic) CGFloat bottomMargin;
@property (assign, nonatomic) CGFloat topMargin;
@property (strong, nonatomic) NSMutableArray *shapeLayerArray;
/**
 *  @param frame的高度就是波浪的高度 不包括底部距下边界距离
 *  @param bottomMargin 波浪底部距下边界距离
 */
+ (instancetype)addToView:(UIView *)view withFrame:(CGRect)frame bottomMargin:(CGFloat)bottomMargin waveNumber:(NSInteger)waveNumber;
/**
 *  @param frame的高度就是波浪的高度 不包括底部距下边界距离
 *  @param topMargin 波浪底部距上边界距离
 */
+ (instancetype)addToView:(UIView *)view withFrame:(CGRect)frame topMargin:(CGFloat)topMargin waveNumber:(NSInteger)waveNumber;
- (BOOL)wave;
- (void)stop;
@end
