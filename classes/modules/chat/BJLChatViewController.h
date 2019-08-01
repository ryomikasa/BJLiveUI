//
//  BJLChatViewController.h
//  BJLiveUI
//
//  Created by MingLQ on 2017-03-02.
//  Copyright © 2017 BaijiaYun. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BJLViewControllerImports.h"

#import "BJL_iCloudLoading.h"

NS_ASSUME_NONNULL_BEGIN

@interface BJLChatViewController : BJLTableViewController <
UITableViewDataSource,
UITableViewDelegate,
BJLRoomChildViewController>

// default: 0.2 ~ 1.0, need call refreshMessages after updating
@property (nonatomic) CGFloat alphaMin, alphaMax;
@property (nonatomic, readonly) UIView *chatStatusView;

@property (nonatomic, copy, nullable) void (^showImageViewCallback)(UIImageView *imageView);
@property (nonatomic, copy, nullable) void (^changeChatStatusCallback)(BJLChatStatus chatStatus, BJLUser * _Nullable targetUser);

- (instancetype)initWithStyle:(UITableViewStyle)style NS_UNAVAILABLE;
- (instancetype)initWithRoom:(BJLRoom *)room NS_DESIGNATED_INITIALIZER;

- (void)refreshMessages;
- (void)sendImageFile:(ICLImageFile *)file image:(nullable UIImage *)image;

- (void)updateChatStatus:(BJLChatStatus)chatStatus withTargetUser:(nullable BJLUser *)targetUser;

@end

NS_ASSUME_NONNULL_END
