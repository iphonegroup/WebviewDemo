//
//  MasterViewController.h
//  WebviewDemo
//
//  Created by agilepc-121 on 12/03/13.
//  Copyright (c) 2013 agilepc-121. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UIViewController<UIWebViewDelegate>
{
    IBOutlet UIWebView *web;
}

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
