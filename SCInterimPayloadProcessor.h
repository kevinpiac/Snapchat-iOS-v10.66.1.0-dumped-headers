//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerInterimPayloadProcessor-Protocol.h"

@interface SCInterimPayloadProcessor : NSObject <SCNContentManagerInterimPayloadProcessor>
{
}

- (void)decrypt:(id)arg1 readStream:(id)arg2 key:(id)arg3 iv:(id)arg4 shouldUsePaddingOption:(_Bool)arg5;
- (void)decryptWithDataIv:(id)arg1 readStream:(id)arg2 key:(id)arg3 iv:(id)arg4;
- (void)unzip:(id)arg1 readStream:(id)arg2;

@end

