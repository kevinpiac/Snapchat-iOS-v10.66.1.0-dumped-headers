//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRequestParser-Protocol.h"

@class NSString;

@interface SOJURequestParser : NSObject <SCRequestParser>
{
    Class _sojuClazz;
}

- (id)acceptHeader;
- (id)initWithSojuClass:(Class)arg1;
- (id)parseData:(id)arg1 MIMEType:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

