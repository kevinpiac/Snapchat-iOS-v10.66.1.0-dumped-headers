//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManiphestTicketCreator-Protocol.h"

@interface SCManiphestTicketCreatorAdaptor : NSObject <SCManiphestTicketCreator>
{
    unsigned long long _betaLoggerKey;
}

@property(nonatomic) unsigned long long betaLoggerKey; // @synthesize betaLoggerKey=_betaLoggerKey;
- (void)createAndFile:(id)arg1 creationTime:(long long)arg2 description:(id)arg3 email:(id)arg4 project:(id)arg5 subproject:(id)arg6;
- (void)createAndFileBetaReport:(id)arg1;
- (id)initWithBetaLoggerKey:(unsigned long long)arg1;

@end
