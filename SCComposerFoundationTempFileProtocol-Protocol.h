//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@class NSString;

@protocol SCComposerFoundationTempFileProtocol <NSObject, SCComposerMarshallable>
- (void)deleteWithCallback:(void (^)(NSString *))arg1;
- (void)getDataWithCallback:(void (^)(NSData *, NSString *))arg1;
- (NSString *)getUrl;
@end

