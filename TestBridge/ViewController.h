//
//  ViewController.h
//  TestBridge
//
//  Created by ManhCuong on 9/19/19.
//  Copyright © 2019 encodejsc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *lblText;
@property (weak, nonatomic) IBOutlet UIButton *bltSetEnglish;
@property (weak, nonatomic) IBOutlet UIButton *bltSetVietnam;
- (IBAction)onSetEnglish:(UIButton *)sender;

- (IBAction)onSetVietnam:(UIButton *)sender;


@end

