//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCActionModel, SCSearchAttachmentsWebView;

@protocol SCSearchAttachmentsWebViewDelegate <NSObject>
- (void)attachmentWebViewDidScroll;
- (void)attachmentWebViewDidTapBackButton:(SCSearchAttachmentsWebView *)arg1;
- (void)attachmentsWebView:(SCSearchAttachmentsWebView *)arg1 didTapWithActionModel:(SCActionModel *)arg2;
@end

