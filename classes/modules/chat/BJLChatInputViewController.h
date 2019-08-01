//
//  BJLChatInputViewController.h
//  BJLiveUI
//
//  Created by MingLQ on 2017-03-03.
//  Copyright © 2017 BaijiaYun. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BJLViewControllerImports.h"

#import "BJL_iCloudLoading.h"

NS_ASSUME_NONNULL_BEGIN

@interface BJLChatInputViewController : UIViewController <
BJLRoomChildViewController,
UITextViewDelegate,
UIPopoverPresentationControllerDelegate,
UINavigationControllerDelegate,
UIImagePickerControllerDelegate,
QBImagePickerControllerDelegate_iCloudLoading>

@property (nonatomic, copy, nullable) void (^selectImageFileCallback)(ICLImageFile *file, UIImage * _Nullable image);

@property (nonatomic, copy, nullable) void (^finishCallback)(NSString * _Nullable errorMessage);

@property (nonatomic, copy, nullable) void (^changeChatStatusCallback)(BJLChatStatus chatStatus, BJLUser * _Nullable targetUser);

- (void)updateChatStatus:(BJLChatStatus)chatStatus withTargetUser:(nullable BJLUser *)targetUser;

@end

NS_ASSUME_NONNULL_END
