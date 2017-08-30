//
//  ViewController.h
//  ReplayKitDemo
//
//  Created by Gavin on 17/8/29.
//  Copyright © 2017年 Gavin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIButton *recordButton;
- (IBAction)recordAction:(UIButton *)sender;

@end

