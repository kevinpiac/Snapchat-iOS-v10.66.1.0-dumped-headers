//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol NSObject;

@protocol SCChatMessageViewModel <NSObject>
- (double)bodyTopMargin;
@property(nonatomic) _Bool bottomLeftCornerIsRounded;
@property(nonatomic) _Bool bottomRightCornerIsRounded;
- (double)calculateHeight;
@property(readonly, nonatomic) double dateHeaderHeight;
@property(readonly, nonatomic) double dateHeaderHorizontalMargin;
@property(readonly, nonatomic) double dateHeaderVerticalMargin;
@property(readonly, nonatomic) double headerHorizontalMargin;
@property(nonatomic) int headerIndex;
@property(nonatomic) double height;
@property(readonly, nonatomic) id <NSObject> identifier;
- (double)intervalFromPrevious;
@property(nonatomic) _Bool isFirstViewModel;
@property(nonatomic) _Bool isLastViewModel;
@property(readonly, nonatomic) _Bool isUnseenMessageInChat;
- (_Bool)needsExtraSpacingOnTop;
- (void)refreshViewModel;
@property(readonly, nonatomic) NSString *reusableCellIdentifier;
@property(nonatomic) _Bool topRightCornerIsRounded;
@property(readonly, nonatomic) _Bool shouldDisplayBelowFoldInChat;
- (_Bool)shouldDisplayBelowFoldInChatForPreviewMode;
@property(readonly, nonatomic) _Bool shouldShowDateHeader;
@property(readonly, nonatomic) _Bool shouldShowSenderHeader;
@property(readonly, nonatomic) _Bool shouldShowTimestamp;
@property(readonly, nonatomic) double topMargin;
@end

