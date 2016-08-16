//
//  DBCameraSegueViewController.h
//  CropImage
//
//  Created by Daniele Bogo on 19/04/14.
//  Copyright (c) 2014 Daniele Bogo. All rights reserved.
//

#import "DBCameraBaseCropViewController.h"
#import "DBCameraDelegate.h"
#import "UIViewController+UIViewController_FullScreen.h"

@class DBCameraFiltersView;

/**
 *  DBCameraSegueViewController
 */
@interface DBCameraSegueViewController : DBCameraBaseCropViewController <DBCameraCropRect, DBCameraSegueSettings, DBCameraViewControllerSettings>
/**
 *  An id object compliant with the DBCameraContainerDelegate
 */
@property (nonatomic, weak) id <DBCameraViewControllerDelegate> delegate;

/**
 *  The metadata dictionary of the captured image
 */
@property (nonatomic, strong) NSDictionary *capturedImageMetadata;

/**
 *  BOOL value indicates the status of the crop mode
 */
@property (nonatomic, assign) BOOL cropMode;

/**
 *  Filter collectionView
 */
@property (nonatomic, strong) DBCameraFiltersView *filtersView;

/**
 * A list of aspect ratios to supply to the user. Dictionary keys are the visible label, values are the aspect ratio as a decimal
 */
@property (nonatomic, strong) NSDictionary *cropAspects;

/**
 * A title for the retake button
 */
@property (nonatomic, strong) NSString *retakeButtonTitle;

/**
 *  Filter to be applied to the image
 */
@property (nonatomic, readonly) NSIndexPath *selectedFilterIndex;

/**
 *  The init method with the captured image and thumb
 *
 *  @param image The captured image
 *
 *  @return A DBCameraSegueViewController
 */
- (id) initWithImage:(UIImage *)image;

/**
 *  Create the interface of the view controller
 */
- (void) createInterface;
@end