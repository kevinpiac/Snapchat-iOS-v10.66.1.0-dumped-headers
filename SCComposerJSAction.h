//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerFunctionCompat.h"

#import "SCComposerAction-Protocol.h"

@class NSString;

@interface SCComposerJSAction : SCComposerFunctionCompat <SCComposerAction>
{
    ObjCppPtrWrapper_6fbac7df _jsRuntime;
    struct StringBox _functionName;
    unsigned int _objectID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithJSRuntime:(ObjCppPtrWrapper_6fbac7df)arg1 functionName:(const struct StringBox *)arg2 objectID:(unsigned int)arg3;
- (id)performWithParameters:(id)arg1;
- (void)performWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

