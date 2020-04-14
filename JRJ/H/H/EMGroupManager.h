//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EMManager.h"

#import "IEMGroupManager-Protocol.h"

@class EMMulticastDelegate, NSString;
@protocol EMGroupManagerDelegate;

@interface EMGroupManager : EMManager <IEMGroupManager>
{
    struct EMGroupManagerListener *groupListener_;
}

- (void)asyncIgnoreGroupPush:(id)arg1 ignore:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updatePushServiceForGroup:(id)arg1 isPushEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)ignoreGroupPush:(id)arg1 ignore:(_Bool)arg2;
- (id)getAllIgnoredGroupIds;
- (id)getGroupsWithoutPushNotification:(id *)arg1;
- (void)asyncDeclineInvitationFromGroup:(id)arg1 inviter:(id)arg2 reason:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)declineGroupInvitation:(id)arg1 inviter:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)declineInvitationFromGroup:(id)arg1 inviter:(id)arg2 reason:(id)arg3;
- (void)asyncAcceptInvitationFromGroup:(id)arg1 inviter:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)acceptInvitationFromGroup:(id)arg1 inviter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)acceptInvitationFromGroup:(id)arg1 inviter:(id)arg2 error:(id *)arg3;
- (void)asyncDeclineJoinApplication:(id)arg1 applicant:(id)arg2 reason:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)declineJoinGroupRequest:(id)arg1 sender:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)declineJoinApplication:(id)arg1 applicant:(id)arg2 reason:(id)arg3;
- (void)asyncAcceptJoinApplication:(id)arg1 applicant:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)approveJoinGroupRequest:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)acceptJoinApplication:(id)arg1 applicant:(id)arg2;
- (void)asyncApplyJoinPublicGroup:(id)arg1 message:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestToJoinPublicGroup:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)applyJoinPublicGroup:(id)arg1 message:(id)arg2 error:(id *)arg3;
- (void)asyncJoinPublicGroup:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)joinPublicGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)joinPublicGroup:(id)arg1 error:(id *)arg2;
- (void)asyncUnblockGroup:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)unblockGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)unblockGroup:(id)arg1 error:(id *)arg2;
- (void)asyncBlockGroup:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)blockGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)blockGroup:(id)arg1 error:(id *)arg2;
- (void)asyncDestroyGroup:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)destroyGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)destroyGroup:(id)arg1 error:(id *)arg2;
- (void)asyncLeaveGroup:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)leaveGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)leaveGroup:(id)arg1 error:(id *)arg2;
- (void)asyncChangeDescription:(id)arg1 forGroup:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateDescription:(id)arg1 forGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)changeDescription:(id)arg1 forGroup:(id)arg2 error:(id *)arg3;
- (void)asyncChangeGroupSubject:(id)arg1 forGroup:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateGroupSubject:(id)arg1 forGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)changeGroupSubject:(id)arg1 forGroup:(id)arg2 error:(id *)arg3;
- (void)asyncUnblockOccupants:(id)arg1 forGroup:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)unblockMembers:(id)arg1 fromGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)unblockOccupants:(id)arg1 forGroup:(id)arg2 error:(id *)arg3;
- (void)asyncBlockOccupants:(id)arg1 fromGroup:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)blockMembers:(id)arg1 fromGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)blockOccupants:(id)arg1 fromGroup:(id)arg2 error:(id *)arg3;
- (void)asyncRemoveOccupants:(id)arg1 fromGroup:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)removeMembers:(id)arg1 fromGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)removeOccupants:(id)arg1 fromGroup:(id)arg2 error:(id *)arg3;
- (void)asyncAddOccupants:(id)arg1 toGroup:(id)arg2 welcomeMessage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)addMembers:(id)arg1 toGroup:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)addOccupants:(id)arg1 toGroup:(id)arg2 welcomeMessage:(id)arg3 error:(id *)arg4;
- (void)asyncFetchGroupBansList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getGroupBlackListFromServerByID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchGroupBansList:(id)arg1 error:(id *)arg2;
- (void)asyncFetchGroupInfo:(id)arg1 includeMembersList:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getGroupSpecificationFromServerByID:(id)arg1 includeMembersList:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchGroupInfo:(id)arg1 includeMembersList:(_Bool)arg2 error:(id *)arg3;
- (void)asyncCreateGroupWithSubject:(id)arg1 description:(id)arg2 invitees:(id)arg3 message:(id)arg4 setting:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)createGroupWithSubject:(id)arg1 description:(id)arg2 invitees:(id)arg3 message:(id)arg4 setting:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)createGroupWithSubject:(id)arg1 description:(id)arg2 invitees:(id)arg3 message:(id)arg4 setting:(id)arg5 error:(id *)arg6;
- (void)asyncSearchPublicGroupWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)searchPublicGroupWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGroup:(id)arg1 request:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)searchPublicGroupWithId:(id)arg1 error:(id *)arg2;
- (void)asyncGetPublicGroupsFromServerWithCursor:(id)arg1 pageSize:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getPublicGroupsFromServerWithCursor:(id)arg1 pageSize:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getPublicGroupsFromServerWithCursor:(id)arg1 pageSize:(long long)arg2 error:(id *)arg3;
- (void)asyncGetMyGroupsFromServer:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getJoinedGroupsFromServerWithCompletion:(CDUnknownBlockType)arg1;
- (id)getMyGroupsFromServerWithError:(id *)arg1;
- (void)handleGroupsRequest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadAllMyGroupsFromDB;
- (id)getAllGroups;
- (id)getJoinedGroups;
- (id)_getGroupWithId:(id)arg1;
@property(readonly, nonatomic) EMMulticastDelegate<EMGroupManagerDelegate> *delegates;
- (void)removeGroupListener;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)dealloc;
- (id)initWithClient:(struct EMChatClient *)arg1 reachability:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
