//
//  LCThreeContentView.h
//  LC
//
//  Created by JustBill on 16/5/24.
//  Copyright © 2016年 邢谢飞. All rights reserved.
//

#import <UIKit/UIKit.h>

//下拉刷新回调
typedef void(^LCThreeContentStratRefreshControlCallBack)(void);

//上拉加载更多
typedef void(^LCThreeContentLoadingMoerCallBack)(void);

@interface LCThreeContentView : UIView

@property (nonatomic ,strong)NSArray *modelArr;

- (void)setLCThreeContentStratRefreshControlCallBack:(LCThreeContentStratRefreshControlCallBack)callback;

- (void)setLCThreeContentLoadingMoerCallBack:(LCThreeContentLoadingMoerCallBack)callback;

- (void)stopRefresh;

@end
