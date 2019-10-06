//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol SCSpectaclesMalibuMessageBufferDelegate;

@interface SCSpectaclesMalibuNordicMessageBuffer : NSObject
{
    NSMutableData *_requestBuffer;
    id <SCSpectaclesMalibuMessageBufferDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_parseBuffer;
- (unsigned long long)_tlvLength;
- (unsigned char)_tlvType;
- (id)dataWithTlvHeaderPrepended:(id)arg1 messageType:(unsigned char)arg2;
@property(nonatomic) __weak id <SCSpectaclesMalibuMessageBufferDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;
- (void)processData:(id)arg1;
@property(retain, nonatomic) NSMutableData *requestBuffer; // @synthesize requestBuffer=_requestBuffer;

@end
