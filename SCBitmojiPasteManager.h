//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCBitmojiPasteDelegate;

@interface SCBitmojiPasteManager : NSObject
{
    int _registrationToken;
    id <SCBitmojiPasteDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCBitmojiPasteDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endObserving;
- (void)pasteBitmoji;
- (void)startObserving;

@end

