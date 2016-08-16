//
//  UIAlertController+supportedInterfaceOrientations.m
//  DBCamera
//
//  Created by Vaughan Reid on 16/08/2016.
//  Copyright © 2016 PSSD - Daniele Bogo. All rights reserved.
//

#import "UIAlertController+supportedInterfaceOrientations.h"

@implementation UIAlertController (supportedInterfaceOrientations)

#if __IPHONE_OS_VERSION_MAX_ALLOWED < 90000
- (NSUInteger)supportedInterfaceOrientations; {
    return UIInterfaceOrientationMaskAll;
}
#else
- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskAll;
}
#endif

@end