//
//  ImageDetailViewController.h
//  SPoT
//
//  Created by Hugo Ferreira on 2013/11/07.
//  Copyright (c) 2013 Mindclick. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ImageEntity.h"

@interface ImageDetailViewController : UIViewController

@property (strong, nonatomic) ImageEntity *imageToDisplay;

@end
