//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@protocol SCComposerMediaImageProtocol <NSObject, SCComposerMarshallable>
- (void)cropWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 callback:(void (^)(id <SCComposerMediaImageProtocol>, NSString *))arg5;
- (void)dispose;
- (double)getHeight;
- (void)getPngDataWithCallback:(void (^)(NSData *, NSString *))arg1;
- (double)getWidth;
- (void)resizeWithWidth:(double)arg1 height:(double)arg2 callback:(void (^)(id <SCComposerMediaImageProtocol>, NSString *))arg3;
- (void)rotateWithAngle:(double)arg1 callback:(void (^)(id <SCComposerMediaImageProtocol>, NSString *))arg2;
@end
