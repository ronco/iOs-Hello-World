//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Ronald White on 3/7/11.
//  Copyright 2011 TrackVia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController {
	UILabel  *label;
	UIButton *button;

}

@property (nonatomic, retain) IBOutlet UILabel *label;

-(IBAction)sayHello:(id) sender;

@end

