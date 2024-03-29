//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCOperaAttachmentInteractionController, UIGestureRecognizer;

@protocol SCOperaAttachmentInteractionControllerDelegate <NSObject>
- (void)attachmentInteractionController:(SCOperaAttachmentInteractionController *)arg1 didUpdateAttachmentViewAnchorPointY:(double)arg2;
- (void)attachmentInteractionController:(SCOperaAttachmentInteractionController *)arg1 didUpdateSwipeAngle:(double)arg2 withVerticalTranslation:(double)arg3;
- (_Bool)attachmentInteractionController:(SCOperaAttachmentInteractionController *)arg1 shouldBeginWithSwipeDirection:(unsigned long long)arg2 gestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)attachmentInteractionControllerDidDismissAttachment:(SCOperaAttachmentInteractionController *)arg1 swipeDirection:(unsigned long long)arg2;
@end

