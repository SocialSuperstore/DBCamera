//
//  UIAlertController+supportedInterfaceOrientations.h
//  DBCamera
//
//  Created by Vaughan Reid on 16/08/2016.
//  Copyright © 2016 PSSD - Daniele Bogo. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * Fix for bug in iOS 9.0 UIAlertController recursively calling supportedInterfaceOrientations 
 */
@interface UIAlertController (supportedInterfaceOrientations)

@end