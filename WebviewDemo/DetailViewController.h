//
//  DetailViewController.h
//  WebviewDemo
//
//  Created by agilepc-121 on 12/03/13.
//  Copyright (c) 2013 agilepc-121. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
