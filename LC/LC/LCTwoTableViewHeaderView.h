//
//  LCTwoTableViewHeaderView.h
//  LC
//
//  Created by JustBill on 16/5/19.
//  Copyright © 2016年 邢谢飞. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LCTwoTableViewHeaderView : UITableViewHeaderFooterView
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@property (nonatomic ,copy)NSString *dateStr;

@end
