#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PlanetlinkKotlinEnumCompanion, PlanetlinkKotlinEnum<E>, PlanetlinkServiceType, PlanetlinkKotlinArray<T>, PlanetlinkServiceEx, PlanetlinkCoreService, PlanetlinkReference, PlanetlinkCoreAccount, PlanetlinkCoreRateLimit, PlanetlinkCoreRateLimitRateLimitValue, PlanetlinkKotlinx_datetimeInstant, PlanetlinkCoreIdentify, PlanetlinkCoreComment, PlanetlinkCorePageable<T>, PlanetlinkCorePaging, PlanetlinkCoreUser, PlanetlinkCoreChannel, PlanetlinkCoreContext, PlanetlinkCoreEmoji, PlanetlinkCoreThread, PlanetlinkCoreCommentForm, PlanetlinkCoreRelationship, PlanetlinkKotlinx_datetimeInstantCompanion, PlanetlinkCoreReaction, PlanetlinkCoreApplication, PlanetlinkCoreMedia, PlanetlinkCoreAttributedString, PlanetlinkCoreUserActionImpl, PlanetlinkCoreAttributedFiled, PlanetlinkCoreEmojiCompanion, PlanetlinkCoreMediaForm, PlanetlinkKotlinByteArray, PlanetlinkCorePollForm, PlanetlinkCoreMediaType, PlanetlinkCoreAttributedStringCompanion, PlanetlinkCoreEmojiType, PlanetlinkCoreEmojiVariationType, PlanetlinkKotlinByteIterator, PlanetlinkCoreSerializedRequest, PlanetlinkKotlinThrowable, PlanetlinkKotlinException, PlanetlinkKotlinRuntimeException, PlanetlinkKotlinIllegalStateException, PlanetlinkCoreAttributedKind, PlanetlinkCoreEmojiTypeCompanion, PlanetlinkCoreEmojiCategoryType, PlanetlinkCoreEmojiVariationTypeCompanion, PlanetlinkCoreSerializedRequestCompanion, PlanetlinkKotlinx_serialization_coreSerializersModule, PlanetlinkKotlinx_serialization_coreSerialKind, PlanetlinkKotlinNothing, PlanetlinkKotlinRegex, PlanetlinkCoreEmojiCategoryTypeCompanion, PlanetlinkKotlinMatchResultDestructured, PlanetlinkKotlinIntRange, PlanetlinkKotlinRegexOption, PlanetlinkKotlinRegexCompanion, PlanetlinkKotlinMatchGroup, PlanetlinkKotlinIntProgressionCompanion, PlanetlinkKotlinIntIterator, PlanetlinkKotlinIntProgression, PlanetlinkKotlinIntRangeCompanion;

@protocol PlanetlinkKotlinComparable, PlanetlinkKotlinIterator, PlanetlinkCoreAccountAction, PlanetlinkCoreActionType, PlanetlinkCoreRequestAction, PlanetlinkCoreStream, PlanetlinkCoreEventCallback, PlanetlinkCoreCommentAction, PlanetlinkCoreCommentsRequest, PlanetlinkCoreUsersRequest, PlanetlinkCoreRequest, PlanetlinkKotlinx_datetimeDateTimeFormat, PlanetlinkKotlinx_serialization_coreKSerializer, PlanetlinkCoreAttributedElement, PlanetlinkCoreUserAction, PlanetlinkKotlinAppendable, PlanetlinkKotlinx_serialization_coreEncoder, PlanetlinkKotlinx_serialization_coreSerialDescriptor, PlanetlinkKotlinx_serialization_coreSerializationStrategy, PlanetlinkKotlinx_serialization_coreDecoder, PlanetlinkKotlinx_serialization_coreDeserializationStrategy, PlanetlinkCoreAttributedType, PlanetlinkKotlinx_serialization_coreCompositeEncoder, PlanetlinkKotlinAnnotation, PlanetlinkKotlinx_serialization_coreCompositeDecoder, PlanetlinkKotlinMatchResult, PlanetlinkKotlinx_serialization_coreSerializersModuleCollector, PlanetlinkKotlinKClass, PlanetlinkKotlinMatchGroupCollection, PlanetlinkKotlinSequence, PlanetlinkKotlinKDeclarationContainer, PlanetlinkKotlinKAnnotatedElement, PlanetlinkKotlinKClassifier, PlanetlinkKotlinIterable, PlanetlinkKotlinCollection, PlanetlinkKotlinClosedRange, PlanetlinkKotlinOpenEndRange;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PlanetlinkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PlanetlinkBase (PlanetlinkBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PlanetlinkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PlanetlinkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPlanetlinkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PlanetlinkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface PlanetlinkByte : PlanetlinkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PlanetlinkUByte : PlanetlinkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PlanetlinkShort : PlanetlinkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PlanetlinkUShort : PlanetlinkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PlanetlinkInt : PlanetlinkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PlanetlinkUInt : PlanetlinkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PlanetlinkLong : PlanetlinkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PlanetlinkULong : PlanetlinkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PlanetlinkFloat : PlanetlinkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PlanetlinkDouble : PlanetlinkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PlanetlinkBoolean : PlanetlinkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PlanetlinkKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PlanetlinkKotlinEnum<E> : PlanetlinkBase <PlanetlinkKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PlanetlinkKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceType")))
@interface PlanetlinkServiceType : PlanetlinkKotlinEnum<PlanetlinkServiceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PlanetlinkServiceType *twitter __attribute__((swift_name("twitter")));
@property (class, readonly) PlanetlinkServiceType *mastodon __attribute__((swift_name("mastodon")));
@property (class, readonly) PlanetlinkServiceType *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) PlanetlinkServiceType *slack __attribute__((swift_name("slack")));
@property (class, readonly) PlanetlinkServiceType *tumblr __attribute__((swift_name("tumblr")));
@property (class, readonly) PlanetlinkServiceType *misskey __attribute__((swift_name("misskey")));
@property (class, readonly) PlanetlinkServiceType *pleroma __attribute__((swift_name("pleroma")));
@property (class, readonly) PlanetlinkServiceType *pixelfed __attribute__((swift_name("pixelfed")));
@property (class, readonly) PlanetlinkServiceType *bluesky __attribute__((swift_name("bluesky")));
+ (PlanetlinkKotlinArray<PlanetlinkServiceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PlanetlinkServiceType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceEx")))
@interface PlanetlinkServiceEx : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serviceEx __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkServiceEx *shared __attribute__((swift_name("shared")));
- (BOOL)isFacebook:(PlanetlinkCoreService *)receiver __attribute__((swift_name("isFacebook(_:)")));
- (BOOL)isSlack:(PlanetlinkCoreService *)receiver __attribute__((swift_name("isSlack(_:)")));
- (BOOL)isTumblr:(PlanetlinkCoreService *)receiver __attribute__((swift_name("isTumblr(_:)")));
- (BOOL)isTwitter:(PlanetlinkCoreService *)receiver __attribute__((swift_name("isTwitter(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reference")))
@interface PlanetlinkReference : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reference __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkReference *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<id> *references __attribute__((swift_name("references")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PlanetlinkKotlinEnumCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PlanetlinkKotlinArray<T> : PlanetlinkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PlanetlinkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PlanetlinkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreService")))
@interface PlanetlinkCoreService : PlanetlinkBase
- (instancetype)initWithType:(NSString *)type account:(PlanetlinkCoreAccount *)account __attribute__((swift_name("init(type:account:)"))) __attribute__((objc_designated_initializer));
@property PlanetlinkCoreAccount *account __attribute__((swift_name("account")));
@property NSString * _Nullable apiHost __attribute__((swift_name("apiHost")));
@property PlanetlinkCoreRateLimit *rateLimit __attribute__((swift_name("rateLimit")));
@property NSString * _Nullable streamHost __attribute__((swift_name("streamHost")));
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PlanetlinkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccount")))
@interface PlanetlinkCoreAccount : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property id<PlanetlinkCoreAccountAction> action __attribute__((swift_name("action")));
@property PlanetlinkCoreService *service __attribute__((swift_name("service")));
@property NSString * _Nullable tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit")))
@interface PlanetlinkCoreRateLimit : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addInfoAction:(id<PlanetlinkCoreActionType>)action value:(PlanetlinkCoreRateLimitRateLimitValue * _Nullable)value __attribute__((swift_name("addInfo(action:value:)")));
- (void)addInfoAction:(id<PlanetlinkCoreActionType>)action service:(NSString *)service limit:(int32_t)limit remaining:(int32_t)remaining reset:(PlanetlinkKotlinx_datetimeInstant *)reset __attribute__((swift_name("addInfo(action:service:limit:remaining:reset:)")));
- (BOOL)isRemainingAction:(id<PlanetlinkCoreActionType>)action __attribute__((swift_name("isRemaining(action:)")));
@end

__attribute__((swift_name("CoreAccountAction")))
@protocol PlanetlinkCoreAccountAction
@required
- (void)blockUserId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("blockUser(id:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreComment *> *)channelTimeLineId:(PlanetlinkCoreIdentify *)id paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("channelTimeLine(id:paging:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreUser *> *)channelUsersId:(PlanetlinkCoreIdentify *)id paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("channelUsers(id:paging:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreChannel *> *)channelsId:(PlanetlinkCoreIdentify *)id paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("channels(id:paging:)")));
- (PlanetlinkCoreComment *)commentUrl:(NSString *)url __attribute__((swift_name("comment(url:)")));
- (PlanetlinkCoreComment *)commentId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("comment(id:)")));
- (PlanetlinkCoreContext *)commentContextsId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("commentContexts(id:)")));
- (void)deleteCommentId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("deleteComment(id:)")));
- (NSArray<PlanetlinkCoreEmoji *> *)emojis __attribute__((swift_name("emojis()")));
- (void)followUserId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("followUser(id:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreUser *> *)followerUsersId:(PlanetlinkCoreIdentify *)id paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("followerUsers(id:paging:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreUser *> *)followingUsersId:(PlanetlinkCoreIdentify *)id paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("followingUsers(id:paging:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreComment *> *)homeTimeLinePaging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("homeTimeLine(paging:)")));
- (void)likeCommentId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("likeComment(id:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreComment *> *)mentionTimeLinePaging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("mentionTimeLine(paging:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreThread *> *)messageThreadPaging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("messageThread(paging:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreComment *> *)messageTimeLineId:(PlanetlinkCoreIdentify *)id paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("messageTimeLine(id:paging:)")));
- (void)muteUserId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("muteUser(id:)")));
- (void)postCommentReq:(PlanetlinkCoreCommentForm *)req __attribute__((swift_name("postComment(req:)")));
- (void)postMessageReq:(PlanetlinkCoreCommentForm *)req __attribute__((swift_name("postMessage(req:)")));
- (void)reactionCommentId:(PlanetlinkCoreIdentify *)id reaction:(NSString *)reaction __attribute__((swift_name("reactionComment(id:reaction:)")));
- (PlanetlinkCoreRelationship *)relationshipId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("relationship(id:)")));
- (id<PlanetlinkCoreRequestAction>)request __attribute__((swift_name("request()")));
- (PlanetlinkCorePageable<PlanetlinkCoreComment *> *)searchTimeLineQuery:(NSString *)query paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("searchTimeLine(query:paging:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreUser *> *)searchUsersQuery:(NSString *)query paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("searchUsers(query:paging:)")));
- (id<PlanetlinkCoreStream>)setHomeTimeLineStreamCallback:(id<PlanetlinkCoreEventCallback>)callback __attribute__((swift_name("setHomeTimeLineStream(callback:)")));
- (id<PlanetlinkCoreStream>)setNotificationStreamCallback:(id<PlanetlinkCoreEventCallback>)callback __attribute__((swift_name("setNotificationStream(callback:)")));
- (void)shareCommentId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("shareComment(id:)")));
- (void)unblockUserId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("unblockUser(id:)")));
- (void)unfollowUserId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("unfollowUser(id:)")));
- (void)unlikeCommentId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("unlikeComment(id:)")));
- (void)unmuteUserId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("unmuteUser(id:)")));
- (void)unreactionCommentId:(PlanetlinkCoreIdentify *)id reaction:(NSString *)reaction __attribute__((swift_name("unreactionComment(id:reaction:)")));
- (void)unshareCommentId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("unshareComment(id:)")));
- (PlanetlinkCoreUser *)userUrl:(NSString *)url __attribute__((swift_name("user(url:)")));
- (PlanetlinkCoreUser *)userId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("user(id:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreComment *> *)userCommentTimeLineId:(PlanetlinkCoreIdentify *)id paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("userCommentTimeLine(id:paging:)")));
- (PlanetlinkCorePageable<PlanetlinkCoreComment *> *)userLikeTimeLineId:(PlanetlinkCoreIdentify *)id paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("userLikeTimeLine(id:paging:)")));
- (PlanetlinkCoreUser *)userMe __attribute__((swift_name("userMe()")));
- (PlanetlinkCorePageable<PlanetlinkCoreComment *> *)userMediaTimeLineId:(PlanetlinkCoreIdentify *)id paging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("userMediaTimeLine(id:paging:)")));
@end

__attribute__((swift_name("CoreActionType")))
@protocol PlanetlinkCoreActionType
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit.RateLimitValue")))
@interface PlanetlinkCoreRateLimitRateLimitValue : PlanetlinkBase
- (instancetype)initWithService:(NSString *)service limit:(int32_t)limit remaining:(int32_t)remaining reset:(PlanetlinkKotlinx_datetimeInstant * _Nullable)reset __attribute__((swift_name("init(service:limit:remaining:reset:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isRemaining __attribute__((swift_name("isRemaining()")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) int32_t remaining __attribute__((swift_name("remaining")));
@property (readonly) PlanetlinkKotlinx_datetimeInstant * _Nullable reset __attribute__((swift_name("reset")));
@property (readonly) NSString *service __attribute__((swift_name("service")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface PlanetlinkKotlinx_datetimeInstant : PlanetlinkBase <PlanetlinkKotlinComparable>
@property (class, readonly, getter=companion) PlanetlinkKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PlanetlinkKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (PlanetlinkKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(PlanetlinkKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (PlanetlinkKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((swift_name("CoreIdentify")))
@interface PlanetlinkCoreIdentify : PlanetlinkBase
- (instancetype)initWithService:(PlanetlinkCoreService *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithService:(PlanetlinkCoreService *)service id:(id)id __attribute__((swift_name("init(service:id:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)id __attribute__((swift_name("id()")));
- (BOOL)isSameIdentifyId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("isSameIdentify(id:)")));
@property (getter=id_) id _Nullable id __attribute__((swift_name("id")));
@property PlanetlinkCoreService *service __attribute__((swift_name("service")));
@end

__attribute__((swift_name("CoreComment")))
@interface PlanetlinkCoreComment : PlanetlinkCoreIdentify
- (instancetype)initWithService:(PlanetlinkCoreService *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithService:(PlanetlinkCoreService *)service id:(id)id __attribute__((swift_name("init(service:id:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<PlanetlinkCoreCommentAction>)action __attribute__((swift_name("action()")));
- (void)applyReactionReaction:(PlanetlinkCoreReaction *)reaction __attribute__((swift_name("applyReaction(reaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
@property PlanetlinkCoreApplication * _Nullable application __attribute__((swift_name("application")));
@property PlanetlinkKotlinx_datetimeInstant * _Nullable createAt __attribute__((swift_name("createAt")));
@property BOOL directMessage __attribute__((swift_name("directMessage")));
@property (readonly) PlanetlinkCoreComment *displayComment __attribute__((swift_name("displayComment")));
@property (readonly) BOOL isOnlyShared __attribute__((swift_name("isOnlyShared")));
@property NSArray<PlanetlinkCoreMedia *> *medias __attribute__((swift_name("medias")));
@property BOOL possiblySensitive __attribute__((swift_name("possiblySensitive")));
@property (readonly) PlanetlinkCoreCommentForm *quoteForm __attribute__((swift_name("quoteForm")));
@property NSArray<PlanetlinkCoreReaction *> *reactions __attribute__((swift_name("reactions")));
@property (readonly) PlanetlinkCoreCommentForm *replyForm __attribute__((swift_name("replyForm")));
@property PlanetlinkCoreComment * _Nullable sharedComment __attribute__((swift_name("sharedComment")));
@property PlanetlinkCoreAttributedString * _Nullable text __attribute__((swift_name("text")));
@property PlanetlinkCoreUser * _Nullable user __attribute__((swift_name("user")));
@property NSString *webUrl __attribute__((swift_name("webUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePageable")))
@interface PlanetlinkCorePageable<T> : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PlanetlinkCorePaging *)doNewPage __attribute__((swift_name("doNewPage()")));
- (PlanetlinkCorePaging *)nextPage __attribute__((swift_name("nextPage()")));
- (PlanetlinkCorePaging *)pastPage __attribute__((swift_name("pastPage()")));
- (PlanetlinkCorePaging *)prevPage __attribute__((swift_name("prevPage()")));
- (void)setMarkPagingEnd __attribute__((swift_name("setMarkPagingEnd()")));
- (void)setNewestIdentifyIdentify:(T)identify __attribute__((swift_name("setNewestIdentify(identify:)")));
- (void)setOldestIdentifyIdentify:(T)identify __attribute__((swift_name("setOldestIdentify(identify:)")));
@property (readonly) NSArray<T> *displayableEntities __attribute__((swift_name("displayableEntities")));
@property NSArray<T> *entities __attribute__((swift_name("entities")));
@property PlanetlinkCorePaging * _Nullable paging __attribute__((swift_name("paging")));
@property PlanetlinkBoolean *(^ _Nullable predicate)(T) __attribute__((swift_name("predicate")));
@end

__attribute__((swift_name("CorePaging")))
@interface PlanetlinkCorePaging : PlanetlinkBase
- (instancetype)initWithCount:(PlanetlinkInt * _Nullable)count __attribute__((swift_name("init(count:)"))) __attribute__((objc_designated_initializer));
- (PlanetlinkCorePaging *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToPg:(PlanetlinkCorePaging *)pg __attribute__((swift_name("doCopyTo(pg:)")));
- (PlanetlinkCorePaging *)doNewPageEntities:(NSArray<PlanetlinkCoreIdentify *> *)entities __attribute__((swift_name("doNewPage(entities:)")));
- (PlanetlinkCorePaging *)nextPageEntities:(NSArray<PlanetlinkCoreIdentify *> *)entities __attribute__((swift_name("nextPage(entities:)")));
- (PlanetlinkCorePaging *)pastPageEntities:(NSArray<PlanetlinkCoreIdentify *> *)entities __attribute__((swift_name("pastPage(entities:)")));
- (PlanetlinkCorePaging *)prevPageEntities:(NSArray<PlanetlinkCoreIdentify *> *)entities __attribute__((swift_name("prevPage(entities:)")));
- (void)setMarkPagingEndEntities:(NSArray<id> *)entities __attribute__((swift_name("setMarkPagingEnd(entities:)")));
@property PlanetlinkInt * _Nullable count __attribute__((swift_name("count")));
@property BOOL isHasNew __attribute__((swift_name("isHasNew")));
@property BOOL isHasPast __attribute__((swift_name("isHasPast")));
@end

__attribute__((swift_name("CoreUser")))
@interface PlanetlinkCoreUser : PlanetlinkCoreIdentify
- (instancetype)initWithService:(PlanetlinkCoreService *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithService:(PlanetlinkCoreService *)service id:(id)id __attribute__((swift_name("init(service:id:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *accountIdentify __attribute__((swift_name("accountIdentify")));
@property (readonly) PlanetlinkCoreUserActionImpl *action __attribute__((swift_name("action")));
@property (readonly) NSMutableArray<PlanetlinkCoreAttributedFiled *> *additionalFields __attribute__((swift_name("additionalFields")));
@property (readonly) PlanetlinkCoreCommentForm *commentForm __attribute__((swift_name("commentForm")));
@property NSString * _Nullable coverImageUrl __attribute__((swift_name("coverImageUrl")));
@property (setter=setDescription:) PlanetlinkCoreAttributedString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable iconImageUrl __attribute__((swift_name("iconImageUrl")));
@property (readonly) PlanetlinkCoreCommentForm *messageForm __attribute__((swift_name("messageForm")));
@property NSString *name __attribute__((swift_name("name")));
@property NSString *webUrl __attribute__((swift_name("webUrl")));
@end

__attribute__((swift_name("CoreChannel")))
@interface PlanetlinkCoreChannel : PlanetlinkCoreIdentify
- (instancetype)initWithService:(PlanetlinkCoreService *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithService:(PlanetlinkCoreService *)service id:(id)id __attribute__((swift_name("init(service:id:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property PlanetlinkKotlinx_datetimeInstant * _Nullable createAt __attribute__((swift_name("createAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property PlanetlinkBoolean * _Nullable isPublic __attribute__((swift_name("isPublic")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreContext")))
@interface PlanetlinkCoreContext : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)sort __attribute__((swift_name("sort()")));
@property NSArray<PlanetlinkCoreComment *> * _Nullable ancestors __attribute__((swift_name("ancestors")));
@property NSArray<PlanetlinkCoreComment *> * _Nullable descendants __attribute__((swift_name("descendants")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmoji")))
@interface PlanetlinkCoreEmoji : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PlanetlinkCoreEmojiCompanion *companion __attribute__((swift_name("companion")));
- (void)addShortCodeShortCode:(NSString *)shortCode __attribute__((swift_name("addShortCode(shortCode:)")));
@property NSString * _Nullable category __attribute__((swift_name("category")));
@property NSString * _Nullable emoji __attribute__((swift_name("emoji")));
@property PlanetlinkInt * _Nullable frequentLevel __attribute__((swift_name("frequentLevel")));
@property NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *shortCode __attribute__((swift_name("shortCode")));
@property NSArray<NSString *> *shortCodes __attribute__((swift_name("shortCodes")));
@end

__attribute__((swift_name("CoreThread")))
@interface PlanetlinkCoreThread : PlanetlinkCoreIdentify
- (instancetype)initWithService:(PlanetlinkCoreService *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithService:(PlanetlinkCoreService *)service id:(id)id __attribute__((swift_name("init(service:id:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property PlanetlinkKotlinx_datetimeInstant * _Nullable lastUpdate __attribute__((swift_name("lastUpdate")));
@property NSArray<PlanetlinkCoreUser *> * _Nullable users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCommentForm")))
@interface PlanetlinkCoreCommentForm : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PlanetlinkCoreCommentForm *)addImageReq:(PlanetlinkCoreMediaForm *)req __attribute__((swift_name("addImage(req:)")));
- (PlanetlinkCoreCommentForm *)addImageData:(PlanetlinkKotlinByteArray *)data name:(NSString *)name __attribute__((swift_name("addImage(data:name:)")));
- (PlanetlinkCoreCommentForm *)addParamKey:(NSString *)key value:(id)value __attribute__((swift_name("addParam(key:value:)")));
- (PlanetlinkCoreCommentForm *)doCopy __attribute__((swift_name("doCopy()")));
- (PlanetlinkCoreCommentForm *)isMessageIsMessage:(BOOL)isMessage __attribute__((swift_name("isMessage(isMessage:)")));
- (PlanetlinkCoreCommentForm *)isSensitiveIsSensitive:(BOOL)isSensitive __attribute__((swift_name("isSensitive(isSensitive:)")));
- (PlanetlinkCoreCommentForm *)pollPoll:(PlanetlinkCorePollForm * _Nullable)poll __attribute__((swift_name("poll(poll:)")));
- (PlanetlinkCoreCommentForm *)quoteIdQuoteId:(id _Nullable)quoteId __attribute__((swift_name("quoteId(quoteId:)")));
- (PlanetlinkCoreCommentForm *)removeImageIndex:(int32_t)index __attribute__((swift_name("removeImage(index:)")));
- (PlanetlinkCoreCommentForm *)replyIdReplyId:(id _Nullable)replyId __attribute__((swift_name("replyId(replyId:)")));
- (PlanetlinkCoreCommentForm *)textText:(NSString * _Nullable)text __attribute__((swift_name("text(text:)")));
- (PlanetlinkCoreCommentForm *)visibilityVisibility:(NSString * _Nullable)visibility __attribute__((swift_name("visibility(visibility:)")));
- (PlanetlinkCoreCommentForm *)warningWarning:(NSString * _Nullable)warning __attribute__((swift_name("warning(warning:)")));
@property NSMutableArray<PlanetlinkCoreMediaForm *> *images __attribute__((swift_name("images")));
@property BOOL isMessage __attribute__((swift_name("isMessage")));
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));
@property PlanetlinkMutableDictionary<NSString *, id> *params __attribute__((swift_name("params")));
@property PlanetlinkCorePollForm * _Nullable poll __attribute__((swift_name("poll")));
@property id _Nullable quoteId __attribute__((swift_name("quoteId")));
@property id _Nullable replyId __attribute__((swift_name("replyId")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@property NSString * _Nullable warning __attribute__((swift_name("warning")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationship")))
@interface PlanetlinkCoreRelationship : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL blocking __attribute__((swift_name("blocking")));
@property BOOL followed __attribute__((swift_name("followed")));
@property BOOL following __attribute__((swift_name("following")));
@property BOOL muting __attribute__((swift_name("muting")));
@end

__attribute__((swift_name("CoreRequestAction")))
@protocol PlanetlinkCoreRequestAction
@required
- (id<PlanetlinkCoreCommentsRequest>)channelTimeLineId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("channelTimeLine(id:)")));
- (id<PlanetlinkCoreUsersRequest>)followerUsersId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("followerUsers(id:)")));
- (id<PlanetlinkCoreUsersRequest>)followingUsersId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("followingUsers(id:)")));
- (id<PlanetlinkCoreRequest> _Nullable)fromRawStringRaw:(NSString *)raw __attribute__((swift_name("fromRawString(raw:)")));
- (id<PlanetlinkCoreCommentsRequest>)homeTimeLine __attribute__((swift_name("homeTimeLine()")));
- (id<PlanetlinkCoreCommentsRequest>)mentionTimeLine __attribute__((swift_name("mentionTimeLine()")));
- (id<PlanetlinkCoreCommentsRequest>)messageTimeLineId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("messageTimeLine(id:)")));
- (id<PlanetlinkCoreCommentsRequest>)searchTimeLineQuery:(NSString *)query __attribute__((swift_name("searchTimeLine(query:)")));
- (id<PlanetlinkCoreUsersRequest>)searchUsersQuery:(NSString *)query __attribute__((swift_name("searchUsers(query:)")));
- (id<PlanetlinkCoreCommentsRequest>)userCommentTimeLineId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("userCommentTimeLine(id:)")));
- (id<PlanetlinkCoreCommentsRequest>)userLikeTimeLineId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("userLikeTimeLine(id:)")));
- (id<PlanetlinkCoreCommentsRequest>)userMediaTimeLineId:(PlanetlinkCoreIdentify *)id __attribute__((swift_name("userMediaTimeLine(id:)")));
@end

__attribute__((swift_name("CoreStream")))
@protocol PlanetlinkCoreStream
@required
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("open(completionHandler:)")));
@property (readonly) BOOL isOpened __attribute__((swift_name("isOpened")));
@end

__attribute__((swift_name("CoreEventCallback")))
@protocol PlanetlinkCoreEventCallback
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface PlanetlinkKotlinx_datetimeInstantCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (PlanetlinkKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (PlanetlinkKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (PlanetlinkKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (PlanetlinkKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (PlanetlinkKotlinx_datetimeInstant *)parseInput:(id)input format:(id<PlanetlinkKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<PlanetlinkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) PlanetlinkKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) PlanetlinkKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("CoreCommentAction")))
@protocol PlanetlinkCoreCommentAction
@required
- (PlanetlinkCoreContext *)commentContexts __attribute__((swift_name("commentContexts()")));
- (PlanetlinkCoreComment *)commentRefresh __attribute__((swift_name("commentRefresh()")));
- (void)delete __attribute__((swift_name("delete()")));
- (void)like __attribute__((swift_name("like()")));
- (void)reactionAction:(NSString *)action __attribute__((swift_name("reaction(action:)")));
- (void)share __attribute__((swift_name("share()")));
- (void)unlike __attribute__((swift_name("unlike()")));
- (void)unreactionAction:(NSString *)action __attribute__((swift_name("unreaction(action:)")));
- (void)unshare __attribute__((swift_name("unshare()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReaction")))
@interface PlanetlinkCoreReaction : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property PlanetlinkInt * _Nullable count __attribute__((swift_name("count")));
@property NSString * _Nullable emoji __attribute__((swift_name("emoji")));
@property NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property BOOL reacting __attribute__((swift_name("reacting")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApplication")))
@interface PlanetlinkCoreApplication : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable website __attribute__((swift_name("website")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMedia")))
@interface PlanetlinkCoreMedia : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable previewUrl __attribute__((swift_name("previewUrl")));
@property (readonly) PlanetlinkMutableDictionary<NSString *, NSString *> *requestHeader __attribute__((swift_name("requestHeader")));
@property NSString * _Nullable sourceUrl __attribute__((swift_name("sourceUrl")));
@property PlanetlinkCoreMediaType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttributedString")))
@interface PlanetlinkCoreAttributedString : PlanetlinkBase
- (instancetype)initWithElements:(NSArray<id<PlanetlinkCoreAttributedElement>> *)elements __attribute__((swift_name("init(elements:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PlanetlinkCoreAttributedStringCompanion *companion __attribute__((swift_name("companion")));
- (void)addEmojiElementEmojis:(NSArray<PlanetlinkCoreEmoji *> * _Nullable)emojis __attribute__((swift_name("addEmojiElement(emojis:)")));
@property (readonly) NSString *displayText __attribute__((swift_name("displayText")));
@property NSArray<id<PlanetlinkCoreAttributedElement>> *elements __attribute__((swift_name("elements")));
@end

__attribute__((swift_name("CoreUserAction")))
@protocol PlanetlinkCoreUserAction
@required
- (void)block __attribute__((swift_name("block()")));
- (void)follow __attribute__((swift_name("follow()")));
- (void)mute __attribute__((swift_name("mute()")));
- (PlanetlinkCoreRelationship * _Nullable)relationship __attribute__((swift_name("relationship()")));
- (void)unblock __attribute__((swift_name("unblock()")));
- (void)unfollow __attribute__((swift_name("unfollow()")));
- (void)unmute __attribute__((swift_name("unmute()")));
- (PlanetlinkCoreUser *)userRefresh __attribute__((swift_name("userRefresh()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserActionImpl")))
@interface PlanetlinkCoreUserActionImpl : PlanetlinkBase <PlanetlinkCoreUserAction>
- (instancetype)initWithAction:(id<PlanetlinkCoreAccountAction>)action user:(PlanetlinkCoreUser *)user __attribute__((swift_name("init(action:user:)"))) __attribute__((objc_designated_initializer));
- (void)block __attribute__((swift_name("block()")));
- (void)follow __attribute__((swift_name("follow()")));
- (void)mute __attribute__((swift_name("mute()")));
- (PlanetlinkCoreRelationship *)relationship __attribute__((swift_name("relationship()")));
- (void)unblock __attribute__((swift_name("unblock()")));
- (void)unfollow __attribute__((swift_name("unfollow()")));
- (void)unmute __attribute__((swift_name("unmute()")));
- (PlanetlinkCoreUser *)userRefresh __attribute__((swift_name("userRefresh()")));
@property id<PlanetlinkCoreAccountAction> action __attribute__((swift_name("action")));
@property PlanetlinkCoreUser *user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttributedFiled")))
@interface PlanetlinkCoreAttributedFiled : PlanetlinkBase
- (instancetype)initWithName:(NSString * _Nullable)name value:(NSString * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString * _Nullable)name value_:(PlanetlinkCoreAttributedString * _Nullable)value __attribute__((swift_name("init(name:value_:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property PlanetlinkCoreAttributedString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmoji.Companion")))
@interface PlanetlinkCoreEmojiCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkCoreEmojiCompanion *shared __attribute__((swift_name("shared")));
- (PlanetlinkCoreEmoji *)fromEmojiTypeE:(PlanetlinkCoreEmojiType *)e __attribute__((swift_name("fromEmojiType(e:)")));
- (PlanetlinkCoreEmoji *)fromEmojiVariationTypeE:(PlanetlinkCoreEmojiVariationType *)e __attribute__((swift_name("fromEmojiVariationType(e:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaForm")))
@interface PlanetlinkCoreMediaForm : PlanetlinkBase
- (instancetype)initWithData:(PlanetlinkKotlinByteArray *)data name:(NSString *)name __attribute__((swift_name("init(data:name:)"))) __attribute__((objc_designated_initializer));
- (PlanetlinkCoreMediaForm *)doCopy __attribute__((swift_name("doCopy()")));
@property PlanetlinkKotlinByteArray *data __attribute__((swift_name("data")));
@property NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface PlanetlinkKotlinByteArray : PlanetlinkBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PlanetlinkByte *(^)(PlanetlinkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PlanetlinkKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollForm")))
@interface PlanetlinkCorePollForm : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PlanetlinkCorePollForm *)addOptionOption:(NSString *)option __attribute__((swift_name("addOption(option:)")));
- (PlanetlinkCorePollForm *)expiresInExpiresIn:(int32_t)expiresIn __attribute__((swift_name("expiresIn(expiresIn:)")));
- (PlanetlinkCorePollForm *)multipleMultiple:(BOOL)multiple __attribute__((swift_name("multiple(multiple:)")));
@property int32_t expiresIn __attribute__((swift_name("expiresIn")));
@property BOOL multiple __attribute__((swift_name("multiple")));
@property (readonly) NSMutableArray<NSString *> *options __attribute__((swift_name("options")));
@end

__attribute__((swift_name("CoreRequest")))
@protocol PlanetlinkCoreRequest
@required
- (NSString * _Nullable)toRawString __attribute__((swift_name("toRawString()")));
@property (readonly) PlanetlinkCoreAccount * _Nullable account __attribute__((swift_name("account")));
@property (readonly) id<PlanetlinkCoreActionType> _Nullable actionType __attribute__((swift_name("actionType")));
@property PlanetlinkCoreSerializedRequest * _Nullable raw __attribute__((swift_name("raw")));
@end

__attribute__((swift_name("CoreCommentsRequest")))
@protocol PlanetlinkCoreCommentsRequest <PlanetlinkCoreRequest>
@required
- (BOOL)canUseCommentsStream __attribute__((swift_name("canUseCommentsStream()")));
- (PlanetlinkCoreCommentForm *)commentFrom __attribute__((swift_name("commentFrom()")));
- (PlanetlinkCorePageable<PlanetlinkCoreComment *> *)commentsPaging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("comments(paging:)")));
- (id<PlanetlinkCoreStream>)setCommentsStreamCallback:(id<PlanetlinkCoreEventCallback>)callback __attribute__((swift_name("setCommentsStream(callback:)")));
@end

__attribute__((swift_name("CoreUsersRequest")))
@protocol PlanetlinkCoreUsersRequest <PlanetlinkCoreRequest>
@required
- (PlanetlinkCorePageable<PlanetlinkCoreUser *> *)usersPaging:(PlanetlinkCorePaging *)paging __attribute__((swift_name("users(paging:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PlanetlinkKotlinThrowable : PlanetlinkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (PlanetlinkKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PlanetlinkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface PlanetlinkKotlinException : PlanetlinkKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface PlanetlinkKotlinRuntimeException : PlanetlinkKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PlanetlinkKotlinIllegalStateException : PlanetlinkKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface PlanetlinkKotlinCancellationException : PlanetlinkKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PlanetlinkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol PlanetlinkKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<PlanetlinkKotlinAppendable>)formatToAppendable:(id<PlanetlinkKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PlanetlinkKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PlanetlinkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PlanetlinkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PlanetlinkKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PlanetlinkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PlanetlinkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PlanetlinkKotlinx_serialization_coreKSerializer <PlanetlinkKotlinx_serialization_coreSerializationStrategy, PlanetlinkKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaType")))
@interface PlanetlinkCoreMediaType : PlanetlinkKotlinEnum<PlanetlinkCoreMediaType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PlanetlinkCoreMediaType *link __attribute__((swift_name("link")));
@property (class, readonly) PlanetlinkCoreMediaType *image __attribute__((swift_name("image")));
@property (class, readonly) PlanetlinkCoreMediaType *movie __attribute__((swift_name("movie")));
@property (class, readonly) PlanetlinkCoreMediaType *file __attribute__((swift_name("file")));
@property (class, readonly) PlanetlinkCoreMediaType *other __attribute__((swift_name("other")));
+ (PlanetlinkKotlinArray<PlanetlinkCoreMediaType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PlanetlinkCoreMediaType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("CoreAttributedElement")))
@protocol PlanetlinkCoreAttributedElement
@required
@property (readonly) NSString *displayText __attribute__((swift_name("displayText")));
@property (readonly) NSString * _Nullable expandedText __attribute__((swift_name("expandedText")));
@property (readonly) PlanetlinkCoreAttributedKind *kind __attribute__((swift_name("kind")));
@property BOOL visible __attribute__((swift_name("visible")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttributedString.Companion")))
@interface PlanetlinkCoreAttributedStringCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkCoreAttributedStringCompanion *shared __attribute__((swift_name("shared")));
- (PlanetlinkCoreAttributedString *)elementsElements:(NSArray<id<PlanetlinkCoreAttributedElement>> *)elements __attribute__((swift_name("elements(elements:)")));
- (PlanetlinkCoreAttributedString *)plainString:(NSString * _Nullable)string __attribute__((swift_name("plain(string:)")));
- (PlanetlinkCoreAttributedString *)plainString:(NSString * _Nullable)string kinds:(NSArray<id<PlanetlinkCoreAttributedType>> *)kinds __attribute__((swift_name("plain(string:kinds:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojiType")))
@interface PlanetlinkCoreEmojiType : PlanetlinkKotlinEnum<PlanetlinkCoreEmojiType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PlanetlinkCoreEmojiTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PlanetlinkCoreEmojiType *hash_ __attribute__((swift_name("hash_")));
@property (class, readonly) PlanetlinkCoreEmojiType *keycapstar __attribute__((swift_name("keycapstar")));
@property (class, readonly) PlanetlinkCoreEmojiType *zero __attribute__((swift_name("zero")));
@property (class, readonly) PlanetlinkCoreEmojiType *one __attribute__((swift_name("one")));
@property (class, readonly) PlanetlinkCoreEmojiType *two __attribute__((swift_name("two")));
@property (class, readonly) PlanetlinkCoreEmojiType *three __attribute__((swift_name("three")));
@property (class, readonly) PlanetlinkCoreEmojiType *four __attribute__((swift_name("four")));
@property (class, readonly) PlanetlinkCoreEmojiType *five __attribute__((swift_name("five")));
@property (class, readonly) PlanetlinkCoreEmojiType *six __attribute__((swift_name("six")));
@property (class, readonly) PlanetlinkCoreEmojiType *seven __attribute__((swift_name("seven")));
@property (class, readonly) PlanetlinkCoreEmojiType *eight __attribute__((swift_name("eight")));
@property (class, readonly) PlanetlinkCoreEmojiType *nine __attribute__((swift_name("nine")));
@property (class, readonly) PlanetlinkCoreEmojiType *copyright __attribute__((swift_name("copyright")));
@property (class, readonly) PlanetlinkCoreEmojiType *registered __attribute__((swift_name("registered")));
@property (class, readonly) PlanetlinkCoreEmojiType *mahjong __attribute__((swift_name("mahjong")));
@property (class, readonly) PlanetlinkCoreEmojiType *blackjoker __attribute__((swift_name("blackjoker")));
@property (class, readonly) PlanetlinkCoreEmojiType *a __attribute__((swift_name("a")));
@property (class, readonly) PlanetlinkCoreEmojiType *b __attribute__((swift_name("b")));
@property (class, readonly) PlanetlinkCoreEmojiType *o2 __attribute__((swift_name("o2")));
@property (class, readonly) PlanetlinkCoreEmojiType *parking __attribute__((swift_name("parking")));
@property (class, readonly) PlanetlinkCoreEmojiType *ab __attribute__((swift_name("ab")));
@property (class, readonly) PlanetlinkCoreEmojiType *cl __attribute__((swift_name("cl")));
@property (class, readonly) PlanetlinkCoreEmojiType *cool __attribute__((swift_name("cool")));
@property (class, readonly) PlanetlinkCoreEmojiType *free __attribute__((swift_name("free")));
@property (class, readonly) PlanetlinkCoreEmojiType *id __attribute__((swift_name("id")));
@property (class, readonly) PlanetlinkCoreEmojiType *theNew __attribute__((swift_name("theNew")));
@property (class, readonly) PlanetlinkCoreEmojiType *ng __attribute__((swift_name("ng")));
@property (class, readonly) PlanetlinkCoreEmojiType *ok __attribute__((swift_name("ok")));
@property (class, readonly) PlanetlinkCoreEmojiType *sos __attribute__((swift_name("sos")));
@property (class, readonly) PlanetlinkCoreEmojiType *up __attribute__((swift_name("up")));
@property (class, readonly) PlanetlinkCoreEmojiType *vs __attribute__((swift_name("vs")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagac __attribute__((swift_name("flagac")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagad __attribute__((swift_name("flagad")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagae __attribute__((swift_name("flagae")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagaf __attribute__((swift_name("flagaf")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagag __attribute__((swift_name("flagag")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagai __attribute__((swift_name("flagai")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagal __attribute__((swift_name("flagal")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagam __attribute__((swift_name("flagam")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagao __attribute__((swift_name("flagao")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagaq __attribute__((swift_name("flagaq")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagar __attribute__((swift_name("flagar")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagas __attribute__((swift_name("flagas")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagat __attribute__((swift_name("flagat")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagau __attribute__((swift_name("flagau")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagaw __attribute__((swift_name("flagaw")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagax __attribute__((swift_name("flagax")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagaz __attribute__((swift_name("flagaz")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagba __attribute__((swift_name("flagba")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbb __attribute__((swift_name("flagbb")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbd __attribute__((swift_name("flagbd")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbe __attribute__((swift_name("flagbe")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbf __attribute__((swift_name("flagbf")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbg __attribute__((swift_name("flagbg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbh __attribute__((swift_name("flagbh")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbi __attribute__((swift_name("flagbi")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbj __attribute__((swift_name("flagbj")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbl __attribute__((swift_name("flagbl")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbm __attribute__((swift_name("flagbm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbn __attribute__((swift_name("flagbn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbo __attribute__((swift_name("flagbo")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbq __attribute__((swift_name("flagbq")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbr __attribute__((swift_name("flagbr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbs __attribute__((swift_name("flagbs")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbt __attribute__((swift_name("flagbt")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbv __attribute__((swift_name("flagbv")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbw __attribute__((swift_name("flagbw")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagby __attribute__((swift_name("flagby")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagbz __attribute__((swift_name("flagbz")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagca __attribute__((swift_name("flagca")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcc __attribute__((swift_name("flagcc")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcd __attribute__((swift_name("flagcd")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcf __attribute__((swift_name("flagcf")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcg __attribute__((swift_name("flagcg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagch __attribute__((swift_name("flagch")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagci __attribute__((swift_name("flagci")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagck __attribute__((swift_name("flagck")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcl __attribute__((swift_name("flagcl")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcm __attribute__((swift_name("flagcm")));
@property (class, readonly) PlanetlinkCoreEmojiType *cn __attribute__((swift_name("cn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagco __attribute__((swift_name("flagco")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcp __attribute__((swift_name("flagcp")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcr __attribute__((swift_name("flagcr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcu __attribute__((swift_name("flagcu")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcv __attribute__((swift_name("flagcv")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcw __attribute__((swift_name("flagcw")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcx __attribute__((swift_name("flagcx")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcy __attribute__((swift_name("flagcy")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagcz __attribute__((swift_name("flagcz")));
@property (class, readonly) PlanetlinkCoreEmojiType *de __attribute__((swift_name("de")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagdg __attribute__((swift_name("flagdg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagdj __attribute__((swift_name("flagdj")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagdk __attribute__((swift_name("flagdk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagdm __attribute__((swift_name("flagdm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagdo __attribute__((swift_name("flagdo")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagdz __attribute__((swift_name("flagdz")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagea __attribute__((swift_name("flagea")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagec __attribute__((swift_name("flagec")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagee __attribute__((swift_name("flagee")));
@property (class, readonly) PlanetlinkCoreEmojiType *flageg __attribute__((swift_name("flageg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flageh __attribute__((swift_name("flageh")));
@property (class, readonly) PlanetlinkCoreEmojiType *flager __attribute__((swift_name("flager")));
@property (class, readonly) PlanetlinkCoreEmojiType *es __attribute__((swift_name("es")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaget __attribute__((swift_name("flaget")));
@property (class, readonly) PlanetlinkCoreEmojiType *flageu __attribute__((swift_name("flageu")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagfi __attribute__((swift_name("flagfi")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagfj __attribute__((swift_name("flagfj")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagfk __attribute__((swift_name("flagfk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagfm __attribute__((swift_name("flagfm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagfo __attribute__((swift_name("flagfo")));
@property (class, readonly) PlanetlinkCoreEmojiType *fr __attribute__((swift_name("fr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagga __attribute__((swift_name("flagga")));
@property (class, readonly) PlanetlinkCoreEmojiType *gb __attribute__((swift_name("gb")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggd __attribute__((swift_name("flaggd")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagge __attribute__((swift_name("flagge")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggf __attribute__((swift_name("flaggf")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggg __attribute__((swift_name("flaggg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggh __attribute__((swift_name("flaggh")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggi __attribute__((swift_name("flaggi")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggl __attribute__((swift_name("flaggl")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggm __attribute__((swift_name("flaggm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggn __attribute__((swift_name("flaggn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggp __attribute__((swift_name("flaggp")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggq __attribute__((swift_name("flaggq")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggr __attribute__((swift_name("flaggr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggs __attribute__((swift_name("flaggs")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggt __attribute__((swift_name("flaggt")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggu __attribute__((swift_name("flaggu")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggw __attribute__((swift_name("flaggw")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaggy __attribute__((swift_name("flaggy")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaghk __attribute__((swift_name("flaghk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaghm __attribute__((swift_name("flaghm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaghn __attribute__((swift_name("flaghn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaghr __attribute__((swift_name("flaghr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaght __attribute__((swift_name("flaght")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaghu __attribute__((swift_name("flaghu")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagic __attribute__((swift_name("flagic")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagid __attribute__((swift_name("flagid")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagie __attribute__((swift_name("flagie")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagil __attribute__((swift_name("flagil")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagim __attribute__((swift_name("flagim")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagin __attribute__((swift_name("flagin")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagio __attribute__((swift_name("flagio")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagiq __attribute__((swift_name("flagiq")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagir __attribute__((swift_name("flagir")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagis __attribute__((swift_name("flagis")));
@property (class, readonly) PlanetlinkCoreEmojiType *it __attribute__((swift_name("it")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagje __attribute__((swift_name("flagje")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagjm __attribute__((swift_name("flagjm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagjo __attribute__((swift_name("flagjo")));
@property (class, readonly) PlanetlinkCoreEmojiType *jp __attribute__((swift_name("jp")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagke __attribute__((swift_name("flagke")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagkg __attribute__((swift_name("flagkg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagkh __attribute__((swift_name("flagkh")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagki __attribute__((swift_name("flagki")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagkm __attribute__((swift_name("flagkm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagkn __attribute__((swift_name("flagkn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagkp __attribute__((swift_name("flagkp")));
@property (class, readonly) PlanetlinkCoreEmojiType *kr __attribute__((swift_name("kr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagkw __attribute__((swift_name("flagkw")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagky __attribute__((swift_name("flagky")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagkz __attribute__((swift_name("flagkz")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagla __attribute__((swift_name("flagla")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaglb __attribute__((swift_name("flaglb")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaglc __attribute__((swift_name("flaglc")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagli __attribute__((swift_name("flagli")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaglk __attribute__((swift_name("flaglk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaglr __attribute__((swift_name("flaglr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagls __attribute__((swift_name("flagls")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaglt __attribute__((swift_name("flaglt")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaglu __attribute__((swift_name("flaglu")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaglv __attribute__((swift_name("flaglv")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagly __attribute__((swift_name("flagly")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagma __attribute__((swift_name("flagma")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmc __attribute__((swift_name("flagmc")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmd __attribute__((swift_name("flagmd")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagme __attribute__((swift_name("flagme")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmf __attribute__((swift_name("flagmf")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmg __attribute__((swift_name("flagmg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmh __attribute__((swift_name("flagmh")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmk __attribute__((swift_name("flagmk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagml __attribute__((swift_name("flagml")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmm __attribute__((swift_name("flagmm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmn __attribute__((swift_name("flagmn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmo __attribute__((swift_name("flagmo")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmp __attribute__((swift_name("flagmp")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmq __attribute__((swift_name("flagmq")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmr __attribute__((swift_name("flagmr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagms __attribute__((swift_name("flagms")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmt __attribute__((swift_name("flagmt")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmu __attribute__((swift_name("flagmu")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmv __attribute__((swift_name("flagmv")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmw __attribute__((swift_name("flagmw")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmx __attribute__((swift_name("flagmx")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmy __attribute__((swift_name("flagmy")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagmz __attribute__((swift_name("flagmz")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagna __attribute__((swift_name("flagna")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagnc __attribute__((swift_name("flagnc")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagne __attribute__((swift_name("flagne")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagnf __attribute__((swift_name("flagnf")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagng __attribute__((swift_name("flagng")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagni __attribute__((swift_name("flagni")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagnl __attribute__((swift_name("flagnl")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagno __attribute__((swift_name("flagno")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagnp __attribute__((swift_name("flagnp")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagnr __attribute__((swift_name("flagnr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagnu __attribute__((swift_name("flagnu")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagnz __attribute__((swift_name("flagnz")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagom __attribute__((swift_name("flagom")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpa __attribute__((swift_name("flagpa")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpe __attribute__((swift_name("flagpe")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpf __attribute__((swift_name("flagpf")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpg __attribute__((swift_name("flagpg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagph __attribute__((swift_name("flagph")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpk __attribute__((swift_name("flagpk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpl __attribute__((swift_name("flagpl")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpm __attribute__((swift_name("flagpm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpn __attribute__((swift_name("flagpn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpr __attribute__((swift_name("flagpr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagps __attribute__((swift_name("flagps")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpt __attribute__((swift_name("flagpt")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpw __attribute__((swift_name("flagpw")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagpy __attribute__((swift_name("flagpy")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagqa __attribute__((swift_name("flagqa")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagre __attribute__((swift_name("flagre")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagro __attribute__((swift_name("flagro")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagrs __attribute__((swift_name("flagrs")));
@property (class, readonly) PlanetlinkCoreEmojiType *ru __attribute__((swift_name("ru")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagrw __attribute__((swift_name("flagrw")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsa __attribute__((swift_name("flagsa")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsb __attribute__((swift_name("flagsb")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsc __attribute__((swift_name("flagsc")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsd __attribute__((swift_name("flagsd")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagse __attribute__((swift_name("flagse")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsg __attribute__((swift_name("flagsg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsh __attribute__((swift_name("flagsh")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsi __attribute__((swift_name("flagsi")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsj __attribute__((swift_name("flagsj")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsk __attribute__((swift_name("flagsk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsl __attribute__((swift_name("flagsl")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsm __attribute__((swift_name("flagsm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsn __attribute__((swift_name("flagsn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagso __attribute__((swift_name("flagso")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsr __attribute__((swift_name("flagsr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagss __attribute__((swift_name("flagss")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagst __attribute__((swift_name("flagst")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsv __attribute__((swift_name("flagsv")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsx __attribute__((swift_name("flagsx")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsy __attribute__((swift_name("flagsy")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagsz __attribute__((swift_name("flagsz")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagta __attribute__((swift_name("flagta")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtc __attribute__((swift_name("flagtc")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtd __attribute__((swift_name("flagtd")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtf __attribute__((swift_name("flagtf")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtg __attribute__((swift_name("flagtg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagth __attribute__((swift_name("flagth")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtj __attribute__((swift_name("flagtj")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtk __attribute__((swift_name("flagtk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtl __attribute__((swift_name("flagtl")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtm __attribute__((swift_name("flagtm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtn __attribute__((swift_name("flagtn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagto __attribute__((swift_name("flagto")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtr __attribute__((swift_name("flagtr")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtt __attribute__((swift_name("flagtt")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtv __attribute__((swift_name("flagtv")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtw __attribute__((swift_name("flagtw")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagtz __attribute__((swift_name("flagtz")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagua __attribute__((swift_name("flagua")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagug __attribute__((swift_name("flagug")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagum __attribute__((swift_name("flagum")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagun __attribute__((swift_name("flagun")));
@property (class, readonly) PlanetlinkCoreEmojiType *us __attribute__((swift_name("us")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaguy __attribute__((swift_name("flaguy")));
@property (class, readonly) PlanetlinkCoreEmojiType *flaguz __attribute__((swift_name("flaguz")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagva __attribute__((swift_name("flagva")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagvc __attribute__((swift_name("flagvc")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagve __attribute__((swift_name("flagve")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagvg __attribute__((swift_name("flagvg")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagvi __attribute__((swift_name("flagvi")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagvn __attribute__((swift_name("flagvn")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagvu __attribute__((swift_name("flagvu")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagwf __attribute__((swift_name("flagwf")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagws __attribute__((swift_name("flagws")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagxk __attribute__((swift_name("flagxk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagye __attribute__((swift_name("flagye")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagyt __attribute__((swift_name("flagyt")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagza __attribute__((swift_name("flagza")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagzm __attribute__((swift_name("flagzm")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagzw __attribute__((swift_name("flagzw")));
@property (class, readonly) PlanetlinkCoreEmojiType *koko __attribute__((swift_name("koko")));
@property (class, readonly) PlanetlinkCoreEmojiType *sa __attribute__((swift_name("sa")));
@property (class, readonly) PlanetlinkCoreEmojiType *u7121 __attribute__((swift_name("u7121")));
@property (class, readonly) PlanetlinkCoreEmojiType *u6307 __attribute__((swift_name("u6307")));
@property (class, readonly) PlanetlinkCoreEmojiType *u7981 __attribute__((swift_name("u7981")));
@property (class, readonly) PlanetlinkCoreEmojiType *u7a7a __attribute__((swift_name("u7a7a")));
@property (class, readonly) PlanetlinkCoreEmojiType *u5408 __attribute__((swift_name("u5408")));
@property (class, readonly) PlanetlinkCoreEmojiType *u6e80 __attribute__((swift_name("u6e80")));
@property (class, readonly) PlanetlinkCoreEmojiType *u6709 __attribute__((swift_name("u6709")));
@property (class, readonly) PlanetlinkCoreEmojiType *u6708 __attribute__((swift_name("u6708")));
@property (class, readonly) PlanetlinkCoreEmojiType *u7533 __attribute__((swift_name("u7533")));
@property (class, readonly) PlanetlinkCoreEmojiType *u5272 __attribute__((swift_name("u5272")));
@property (class, readonly) PlanetlinkCoreEmojiType *u55b6 __attribute__((swift_name("u55b6")));
@property (class, readonly) PlanetlinkCoreEmojiType *ideographadvantage __attribute__((swift_name("ideographadvantage")));
@property (class, readonly) PlanetlinkCoreEmojiType *accept __attribute__((swift_name("accept")));
@property (class, readonly) PlanetlinkCoreEmojiType *cyclone __attribute__((swift_name("cyclone")));
@property (class, readonly) PlanetlinkCoreEmojiType *foggy __attribute__((swift_name("foggy")));
@property (class, readonly) PlanetlinkCoreEmojiType *closedumbrella __attribute__((swift_name("closedumbrella")));
@property (class, readonly) PlanetlinkCoreEmojiType *nightwithstars __attribute__((swift_name("nightwithstars")));
@property (class, readonly) PlanetlinkCoreEmojiType *sunriseovermountains __attribute__((swift_name("sunriseovermountains")));
@property (class, readonly) PlanetlinkCoreEmojiType *sunrise __attribute__((swift_name("sunrise")));
@property (class, readonly) PlanetlinkCoreEmojiType *citysunset __attribute__((swift_name("citysunset")));
@property (class, readonly) PlanetlinkCoreEmojiType *citysunrise __attribute__((swift_name("citysunrise")));
@property (class, readonly) PlanetlinkCoreEmojiType *rainbow __attribute__((swift_name("rainbow")));
@property (class, readonly) PlanetlinkCoreEmojiType *bridgeatnight __attribute__((swift_name("bridgeatnight")));
@property (class, readonly) PlanetlinkCoreEmojiType *ocean __attribute__((swift_name("ocean")));
@property (class, readonly) PlanetlinkCoreEmojiType *volcano __attribute__((swift_name("volcano")));
@property (class, readonly) PlanetlinkCoreEmojiType *milkyway __attribute__((swift_name("milkyway")));
@property (class, readonly) PlanetlinkCoreEmojiType *earthafrica __attribute__((swift_name("earthafrica")));
@property (class, readonly) PlanetlinkCoreEmojiType *earthamericas __attribute__((swift_name("earthamericas")));
@property (class, readonly) PlanetlinkCoreEmojiType *earthasia __attribute__((swift_name("earthasia")));
@property (class, readonly) PlanetlinkCoreEmojiType *globewithmeridians __attribute__((swift_name("globewithmeridians")));
@property (class, readonly) PlanetlinkCoreEmojiType *newmoon __attribute__((swift_name("newmoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *waxingcrescentmoon __attribute__((swift_name("waxingcrescentmoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *firstquartermoon __attribute__((swift_name("firstquartermoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *moon __attribute__((swift_name("moon")));
@property (class, readonly) PlanetlinkCoreEmojiType *fullmoon __attribute__((swift_name("fullmoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *waninggibbousmoon __attribute__((swift_name("waninggibbousmoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *lastquartermoon __attribute__((swift_name("lastquartermoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *waningcrescentmoon __attribute__((swift_name("waningcrescentmoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *crescentmoon __attribute__((swift_name("crescentmoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *newmoonwithface __attribute__((swift_name("newmoonwithface")));
@property (class, readonly) PlanetlinkCoreEmojiType *firstquartermoonwithface __attribute__((swift_name("firstquartermoonwithface")));
@property (class, readonly) PlanetlinkCoreEmojiType *lastquartermoonwithface __attribute__((swift_name("lastquartermoonwithface")));
@property (class, readonly) PlanetlinkCoreEmojiType *fullmoonwithface __attribute__((swift_name("fullmoonwithface")));
@property (class, readonly) PlanetlinkCoreEmojiType *sunwithface __attribute__((swift_name("sunwithface")));
@property (class, readonly) PlanetlinkCoreEmojiType *star2 __attribute__((swift_name("star2")));
@property (class, readonly) PlanetlinkCoreEmojiType *stars __attribute__((swift_name("stars")));
@property (class, readonly) PlanetlinkCoreEmojiType *thermometer __attribute__((swift_name("thermometer")));
@property (class, readonly) PlanetlinkCoreEmojiType *mostlysunny __attribute__((swift_name("mostlysunny")));
@property (class, readonly) PlanetlinkCoreEmojiType *barelysunny __attribute__((swift_name("barelysunny")));
@property (class, readonly) PlanetlinkCoreEmojiType *partlysunnyrain __attribute__((swift_name("partlysunnyrain")));
@property (class, readonly) PlanetlinkCoreEmojiType *raincloud __attribute__((swift_name("raincloud")));
@property (class, readonly) PlanetlinkCoreEmojiType *snowcloud __attribute__((swift_name("snowcloud")));
@property (class, readonly) PlanetlinkCoreEmojiType *lightning __attribute__((swift_name("lightning")));
@property (class, readonly) PlanetlinkCoreEmojiType *tornado __attribute__((swift_name("tornado")));
@property (class, readonly) PlanetlinkCoreEmojiType *fog __attribute__((swift_name("fog")));
@property (class, readonly) PlanetlinkCoreEmojiType *windblowingface __attribute__((swift_name("windblowingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *hotdog __attribute__((swift_name("hotdog")));
@property (class, readonly) PlanetlinkCoreEmojiType *taco __attribute__((swift_name("taco")));
@property (class, readonly) PlanetlinkCoreEmojiType *burrito __attribute__((swift_name("burrito")));
@property (class, readonly) PlanetlinkCoreEmojiType *chestnut __attribute__((swift_name("chestnut")));
@property (class, readonly) PlanetlinkCoreEmojiType *seedling __attribute__((swift_name("seedling")));
@property (class, readonly) PlanetlinkCoreEmojiType *evergreentree __attribute__((swift_name("evergreentree")));
@property (class, readonly) PlanetlinkCoreEmojiType *deciduoustree __attribute__((swift_name("deciduoustree")));
@property (class, readonly) PlanetlinkCoreEmojiType *palmtree __attribute__((swift_name("palmtree")));
@property (class, readonly) PlanetlinkCoreEmojiType *cactus __attribute__((swift_name("cactus")));
@property (class, readonly) PlanetlinkCoreEmojiType *hotpepper __attribute__((swift_name("hotpepper")));
@property (class, readonly) PlanetlinkCoreEmojiType *tulip __attribute__((swift_name("tulip")));
@property (class, readonly) PlanetlinkCoreEmojiType *cherryblossom __attribute__((swift_name("cherryblossom")));
@property (class, readonly) PlanetlinkCoreEmojiType *rose __attribute__((swift_name("rose")));
@property (class, readonly) PlanetlinkCoreEmojiType *hibiscus __attribute__((swift_name("hibiscus")));
@property (class, readonly) PlanetlinkCoreEmojiType *sunflower __attribute__((swift_name("sunflower")));
@property (class, readonly) PlanetlinkCoreEmojiType *blossom __attribute__((swift_name("blossom")));
@property (class, readonly) PlanetlinkCoreEmojiType *corn __attribute__((swift_name("corn")));
@property (class, readonly) PlanetlinkCoreEmojiType *earofrice __attribute__((swift_name("earofrice")));
@property (class, readonly) PlanetlinkCoreEmojiType *herb __attribute__((swift_name("herb")));
@property (class, readonly) PlanetlinkCoreEmojiType *fourleafclover __attribute__((swift_name("fourleafclover")));
@property (class, readonly) PlanetlinkCoreEmojiType *mapleleaf __attribute__((swift_name("mapleleaf")));
@property (class, readonly) PlanetlinkCoreEmojiType *fallenleaf __attribute__((swift_name("fallenleaf")));
@property (class, readonly) PlanetlinkCoreEmojiType *leaves __attribute__((swift_name("leaves")));
@property (class, readonly) PlanetlinkCoreEmojiType *mushroom __attribute__((swift_name("mushroom")));
@property (class, readonly) PlanetlinkCoreEmojiType *tomato __attribute__((swift_name("tomato")));
@property (class, readonly) PlanetlinkCoreEmojiType *eggplant __attribute__((swift_name("eggplant")));
@property (class, readonly) PlanetlinkCoreEmojiType *grapes __attribute__((swift_name("grapes")));
@property (class, readonly) PlanetlinkCoreEmojiType *melon __attribute__((swift_name("melon")));
@property (class, readonly) PlanetlinkCoreEmojiType *watermelon __attribute__((swift_name("watermelon")));
@property (class, readonly) PlanetlinkCoreEmojiType *tangerine __attribute__((swift_name("tangerine")));
@property (class, readonly) PlanetlinkCoreEmojiType *lemon __attribute__((swift_name("lemon")));
@property (class, readonly) PlanetlinkCoreEmojiType *banana __attribute__((swift_name("banana")));
@property (class, readonly) PlanetlinkCoreEmojiType *pineapple __attribute__((swift_name("pineapple")));
@property (class, readonly) PlanetlinkCoreEmojiType *apple __attribute__((swift_name("apple")));
@property (class, readonly) PlanetlinkCoreEmojiType *greenapple __attribute__((swift_name("greenapple")));
@property (class, readonly) PlanetlinkCoreEmojiType *pear __attribute__((swift_name("pear")));
@property (class, readonly) PlanetlinkCoreEmojiType *peach __attribute__((swift_name("peach")));
@property (class, readonly) PlanetlinkCoreEmojiType *cherries __attribute__((swift_name("cherries")));
@property (class, readonly) PlanetlinkCoreEmojiType *strawberry __attribute__((swift_name("strawberry")));
@property (class, readonly) PlanetlinkCoreEmojiType *hamburger __attribute__((swift_name("hamburger")));
@property (class, readonly) PlanetlinkCoreEmojiType *pizza __attribute__((swift_name("pizza")));
@property (class, readonly) PlanetlinkCoreEmojiType *meatonbone __attribute__((swift_name("meatonbone")));
@property (class, readonly) PlanetlinkCoreEmojiType *poultryleg __attribute__((swift_name("poultryleg")));
@property (class, readonly) PlanetlinkCoreEmojiType *ricecracker __attribute__((swift_name("ricecracker")));
@property (class, readonly) PlanetlinkCoreEmojiType *riceball __attribute__((swift_name("riceball")));
@property (class, readonly) PlanetlinkCoreEmojiType *rice __attribute__((swift_name("rice")));
@property (class, readonly) PlanetlinkCoreEmojiType *curry __attribute__((swift_name("curry")));
@property (class, readonly) PlanetlinkCoreEmojiType *ramen __attribute__((swift_name("ramen")));
@property (class, readonly) PlanetlinkCoreEmojiType *spaghetti __attribute__((swift_name("spaghetti")));
@property (class, readonly) PlanetlinkCoreEmojiType *bread __attribute__((swift_name("bread")));
@property (class, readonly) PlanetlinkCoreEmojiType *fries __attribute__((swift_name("fries")));
@property (class, readonly) PlanetlinkCoreEmojiType *sweetpotato __attribute__((swift_name("sweetpotato")));
@property (class, readonly) PlanetlinkCoreEmojiType *dango __attribute__((swift_name("dango")));
@property (class, readonly) PlanetlinkCoreEmojiType *oden __attribute__((swift_name("oden")));
@property (class, readonly) PlanetlinkCoreEmojiType *sushi __attribute__((swift_name("sushi")));
@property (class, readonly) PlanetlinkCoreEmojiType *friedshrimp __attribute__((swift_name("friedshrimp")));
@property (class, readonly) PlanetlinkCoreEmojiType *fishcake __attribute__((swift_name("fishcake")));
@property (class, readonly) PlanetlinkCoreEmojiType *icecream __attribute__((swift_name("icecream")));
@property (class, readonly) PlanetlinkCoreEmojiType *shavedice __attribute__((swift_name("shavedice")));
@property (class, readonly) PlanetlinkCoreEmojiType *icecream_ __attribute__((swift_name("icecream_")));
@property (class, readonly) PlanetlinkCoreEmojiType *doughnut __attribute__((swift_name("doughnut")));
@property (class, readonly) PlanetlinkCoreEmojiType *cookie __attribute__((swift_name("cookie")));
@property (class, readonly) PlanetlinkCoreEmojiType *chocolatebar __attribute__((swift_name("chocolatebar")));
@property (class, readonly) PlanetlinkCoreEmojiType *candy __attribute__((swift_name("candy")));
@property (class, readonly) PlanetlinkCoreEmojiType *lollipop __attribute__((swift_name("lollipop")));
@property (class, readonly) PlanetlinkCoreEmojiType *custard __attribute__((swift_name("custard")));
@property (class, readonly) PlanetlinkCoreEmojiType *honeypot __attribute__((swift_name("honeypot")));
@property (class, readonly) PlanetlinkCoreEmojiType *cake __attribute__((swift_name("cake")));
@property (class, readonly) PlanetlinkCoreEmojiType *bento __attribute__((swift_name("bento")));
@property (class, readonly) PlanetlinkCoreEmojiType *stew __attribute__((swift_name("stew")));
@property (class, readonly) PlanetlinkCoreEmojiType *friedegg __attribute__((swift_name("friedegg")));
@property (class, readonly) PlanetlinkCoreEmojiType *forkandknife __attribute__((swift_name("forkandknife")));
@property (class, readonly) PlanetlinkCoreEmojiType *tea __attribute__((swift_name("tea")));
@property (class, readonly) PlanetlinkCoreEmojiType *sake __attribute__((swift_name("sake")));
@property (class, readonly) PlanetlinkCoreEmojiType *wineglass __attribute__((swift_name("wineglass")));
@property (class, readonly) PlanetlinkCoreEmojiType *cocktail __attribute__((swift_name("cocktail")));
@property (class, readonly) PlanetlinkCoreEmojiType *tropicaldrink __attribute__((swift_name("tropicaldrink")));
@property (class, readonly) PlanetlinkCoreEmojiType *beer __attribute__((swift_name("beer")));
@property (class, readonly) PlanetlinkCoreEmojiType *beers __attribute__((swift_name("beers")));
@property (class, readonly) PlanetlinkCoreEmojiType *babybottle __attribute__((swift_name("babybottle")));
@property (class, readonly) PlanetlinkCoreEmojiType *knifeforkplate __attribute__((swift_name("knifeforkplate")));
@property (class, readonly) PlanetlinkCoreEmojiType *champagne __attribute__((swift_name("champagne")));
@property (class, readonly) PlanetlinkCoreEmojiType *popcorn __attribute__((swift_name("popcorn")));
@property (class, readonly) PlanetlinkCoreEmojiType *ribbon __attribute__((swift_name("ribbon")));
@property (class, readonly) PlanetlinkCoreEmojiType *gift __attribute__((swift_name("gift")));
@property (class, readonly) PlanetlinkCoreEmojiType *birthday __attribute__((swift_name("birthday")));
@property (class, readonly) PlanetlinkCoreEmojiType *jackolantern __attribute__((swift_name("jackolantern")));
@property (class, readonly) PlanetlinkCoreEmojiType *christmastree __attribute__((swift_name("christmastree")));
@property (class, readonly) PlanetlinkCoreEmojiType *santa __attribute__((swift_name("santa")));
@property (class, readonly) PlanetlinkCoreEmojiType *fireworks __attribute__((swift_name("fireworks")));
@property (class, readonly) PlanetlinkCoreEmojiType *sparkler __attribute__((swift_name("sparkler")));
@property (class, readonly) PlanetlinkCoreEmojiType *balloon __attribute__((swift_name("balloon")));
@property (class, readonly) PlanetlinkCoreEmojiType *tada __attribute__((swift_name("tada")));
@property (class, readonly) PlanetlinkCoreEmojiType *confettiball __attribute__((swift_name("confettiball")));
@property (class, readonly) PlanetlinkCoreEmojiType *tanabatatree __attribute__((swift_name("tanabatatree")));
@property (class, readonly) PlanetlinkCoreEmojiType *crossedflags __attribute__((swift_name("crossedflags")));
@property (class, readonly) PlanetlinkCoreEmojiType *bamboo __attribute__((swift_name("bamboo")));
@property (class, readonly) PlanetlinkCoreEmojiType *dolls __attribute__((swift_name("dolls")));
@property (class, readonly) PlanetlinkCoreEmojiType *flags __attribute__((swift_name("flags")));
@property (class, readonly) PlanetlinkCoreEmojiType *windchime __attribute__((swift_name("windchime")));
@property (class, readonly) PlanetlinkCoreEmojiType *ricescene __attribute__((swift_name("ricescene")));
@property (class, readonly) PlanetlinkCoreEmojiType *schoolsatchel __attribute__((swift_name("schoolsatchel")));
@property (class, readonly) PlanetlinkCoreEmojiType *mortarboard __attribute__((swift_name("mortarboard")));
@property (class, readonly) PlanetlinkCoreEmojiType *medal __attribute__((swift_name("medal")));
@property (class, readonly) PlanetlinkCoreEmojiType *reminderribbon __attribute__((swift_name("reminderribbon")));
@property (class, readonly) PlanetlinkCoreEmojiType *studiomicrophone __attribute__((swift_name("studiomicrophone")));
@property (class, readonly) PlanetlinkCoreEmojiType *levelslider __attribute__((swift_name("levelslider")));
@property (class, readonly) PlanetlinkCoreEmojiType *controlknobs __attribute__((swift_name("controlknobs")));
@property (class, readonly) PlanetlinkCoreEmojiType *filmframes __attribute__((swift_name("filmframes")));
@property (class, readonly) PlanetlinkCoreEmojiType *admissiontickets __attribute__((swift_name("admissiontickets")));
@property (class, readonly) PlanetlinkCoreEmojiType *carouselhorse __attribute__((swift_name("carouselhorse")));
@property (class, readonly) PlanetlinkCoreEmojiType *ferriswheel __attribute__((swift_name("ferriswheel")));
@property (class, readonly) PlanetlinkCoreEmojiType *rollercoaster __attribute__((swift_name("rollercoaster")));
@property (class, readonly) PlanetlinkCoreEmojiType *fishingpoleandfish __attribute__((swift_name("fishingpoleandfish")));
@property (class, readonly) PlanetlinkCoreEmojiType *microphone __attribute__((swift_name("microphone")));
@property (class, readonly) PlanetlinkCoreEmojiType *moviecamera __attribute__((swift_name("moviecamera")));
@property (class, readonly) PlanetlinkCoreEmojiType *cinema __attribute__((swift_name("cinema")));
@property (class, readonly) PlanetlinkCoreEmojiType *headphones __attribute__((swift_name("headphones")));
@property (class, readonly) PlanetlinkCoreEmojiType *art __attribute__((swift_name("art")));
@property (class, readonly) PlanetlinkCoreEmojiType *tophat __attribute__((swift_name("tophat")));
@property (class, readonly) PlanetlinkCoreEmojiType *circustent __attribute__((swift_name("circustent")));
@property (class, readonly) PlanetlinkCoreEmojiType *ticket __attribute__((swift_name("ticket")));
@property (class, readonly) PlanetlinkCoreEmojiType *clapper __attribute__((swift_name("clapper")));
@property (class, readonly) PlanetlinkCoreEmojiType *performingarts __attribute__((swift_name("performingarts")));
@property (class, readonly) PlanetlinkCoreEmojiType *videogame __attribute__((swift_name("videogame")));
@property (class, readonly) PlanetlinkCoreEmojiType *dart __attribute__((swift_name("dart")));
@property (class, readonly) PlanetlinkCoreEmojiType *slotmachine __attribute__((swift_name("slotmachine")));
@property (class, readonly) PlanetlinkCoreEmojiType *emoji8ball __attribute__((swift_name("emoji8ball")));
@property (class, readonly) PlanetlinkCoreEmojiType *gamedie __attribute__((swift_name("gamedie")));
@property (class, readonly) PlanetlinkCoreEmojiType *bowling __attribute__((swift_name("bowling")));
@property (class, readonly) PlanetlinkCoreEmojiType *flowerplayingcards __attribute__((swift_name("flowerplayingcards")));
@property (class, readonly) PlanetlinkCoreEmojiType *musicalnote __attribute__((swift_name("musicalnote")));
@property (class, readonly) PlanetlinkCoreEmojiType *notes __attribute__((swift_name("notes")));
@property (class, readonly) PlanetlinkCoreEmojiType *saxophone __attribute__((swift_name("saxophone")));
@property (class, readonly) PlanetlinkCoreEmojiType *guitar __attribute__((swift_name("guitar")));
@property (class, readonly) PlanetlinkCoreEmojiType *musicalkeyboard __attribute__((swift_name("musicalkeyboard")));
@property (class, readonly) PlanetlinkCoreEmojiType *trumpet __attribute__((swift_name("trumpet")));
@property (class, readonly) PlanetlinkCoreEmojiType *violin __attribute__((swift_name("violin")));
@property (class, readonly) PlanetlinkCoreEmojiType *musicalscore __attribute__((swift_name("musicalscore")));
@property (class, readonly) PlanetlinkCoreEmojiType *runningshirtwithsash __attribute__((swift_name("runningshirtwithsash")));
@property (class, readonly) PlanetlinkCoreEmojiType *tennis __attribute__((swift_name("tennis")));
@property (class, readonly) PlanetlinkCoreEmojiType *ski __attribute__((swift_name("ski")));
@property (class, readonly) PlanetlinkCoreEmojiType *basketball __attribute__((swift_name("basketball")));
@property (class, readonly) PlanetlinkCoreEmojiType *checkeredflag __attribute__((swift_name("checkeredflag")));
@property (class, readonly) PlanetlinkCoreEmojiType *snowboarder __attribute__((swift_name("snowboarder")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanrunning __attribute__((swift_name("womanrunning")));
@property (class, readonly) PlanetlinkCoreEmojiType *manrunning __attribute__((swift_name("manrunning")));
@property (class, readonly) PlanetlinkCoreEmojiType *runner __attribute__((swift_name("runner")));
@property (class, readonly) PlanetlinkCoreEmojiType *womansurfing __attribute__((swift_name("womansurfing")));
@property (class, readonly) PlanetlinkCoreEmojiType *mansurfing __attribute__((swift_name("mansurfing")));
@property (class, readonly) PlanetlinkCoreEmojiType *surfer __attribute__((swift_name("surfer")));
@property (class, readonly) PlanetlinkCoreEmojiType *sportsmedal __attribute__((swift_name("sportsmedal")));
@property (class, readonly) PlanetlinkCoreEmojiType *trophy __attribute__((swift_name("trophy")));
@property (class, readonly) PlanetlinkCoreEmojiType *horseracing __attribute__((swift_name("horseracing")));
@property (class, readonly) PlanetlinkCoreEmojiType *football __attribute__((swift_name("football")));
@property (class, readonly) PlanetlinkCoreEmojiType *rugbyfootball __attribute__((swift_name("rugbyfootball")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanswimming __attribute__((swift_name("womanswimming")));
@property (class, readonly) PlanetlinkCoreEmojiType *manswimming __attribute__((swift_name("manswimming")));
@property (class, readonly) PlanetlinkCoreEmojiType *swimmer __attribute__((swift_name("swimmer")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanliftingweights __attribute__((swift_name("womanliftingweights")));
@property (class, readonly) PlanetlinkCoreEmojiType *manliftingweights __attribute__((swift_name("manliftingweights")));
@property (class, readonly) PlanetlinkCoreEmojiType *weightlifter __attribute__((swift_name("weightlifter")));
@property (class, readonly) PlanetlinkCoreEmojiType *womangolfing __attribute__((swift_name("womangolfing")));
@property (class, readonly) PlanetlinkCoreEmojiType *mangolfing __attribute__((swift_name("mangolfing")));
@property (class, readonly) PlanetlinkCoreEmojiType *golfer __attribute__((swift_name("golfer")));
@property (class, readonly) PlanetlinkCoreEmojiType *racingmotorcycle __attribute__((swift_name("racingmotorcycle")));
@property (class, readonly) PlanetlinkCoreEmojiType *racingcar __attribute__((swift_name("racingcar")));
@property (class, readonly) PlanetlinkCoreEmojiType *cricketbatandball __attribute__((swift_name("cricketbatandball")));
@property (class, readonly) PlanetlinkCoreEmojiType *volleyball __attribute__((swift_name("volleyball")));
@property (class, readonly) PlanetlinkCoreEmojiType *fieldhockeystickandball __attribute__((swift_name("fieldhockeystickandball")));
@property (class, readonly) PlanetlinkCoreEmojiType *icehockeystickandpuck __attribute__((swift_name("icehockeystickandpuck")));
@property (class, readonly) PlanetlinkCoreEmojiType *tabletennispaddleandball __attribute__((swift_name("tabletennispaddleandball")));
@property (class, readonly) PlanetlinkCoreEmojiType *snowcappedmountain __attribute__((swift_name("snowcappedmountain")));
@property (class, readonly) PlanetlinkCoreEmojiType *camping __attribute__((swift_name("camping")));
@property (class, readonly) PlanetlinkCoreEmojiType *beachwithumbrella __attribute__((swift_name("beachwithumbrella")));
@property (class, readonly) PlanetlinkCoreEmojiType *buildingconstruction __attribute__((swift_name("buildingconstruction")));
@property (class, readonly) PlanetlinkCoreEmojiType *housebuildings __attribute__((swift_name("housebuildings")));
@property (class, readonly) PlanetlinkCoreEmojiType *cityscape __attribute__((swift_name("cityscape")));
@property (class, readonly) PlanetlinkCoreEmojiType *derelicthousebuilding __attribute__((swift_name("derelicthousebuilding")));
@property (class, readonly) PlanetlinkCoreEmojiType *classicalbuilding __attribute__((swift_name("classicalbuilding")));
@property (class, readonly) PlanetlinkCoreEmojiType *desert __attribute__((swift_name("desert")));
@property (class, readonly) PlanetlinkCoreEmojiType *desertisland __attribute__((swift_name("desertisland")));
@property (class, readonly) PlanetlinkCoreEmojiType *nationalpark __attribute__((swift_name("nationalpark")));
@property (class, readonly) PlanetlinkCoreEmojiType *stadium __attribute__((swift_name("stadium")));
@property (class, readonly) PlanetlinkCoreEmojiType *house __attribute__((swift_name("house")));
@property (class, readonly) PlanetlinkCoreEmojiType *housewithgarden __attribute__((swift_name("housewithgarden")));
@property (class, readonly) PlanetlinkCoreEmojiType *office __attribute__((swift_name("office")));
@property (class, readonly) PlanetlinkCoreEmojiType *postoffice __attribute__((swift_name("postoffice")));
@property (class, readonly) PlanetlinkCoreEmojiType *europeanpostoffice __attribute__((swift_name("europeanpostoffice")));
@property (class, readonly) PlanetlinkCoreEmojiType *hospital __attribute__((swift_name("hospital")));
@property (class, readonly) PlanetlinkCoreEmojiType *bank __attribute__((swift_name("bank")));
@property (class, readonly) PlanetlinkCoreEmojiType *atm __attribute__((swift_name("atm")));
@property (class, readonly) PlanetlinkCoreEmojiType *hotel __attribute__((swift_name("hotel")));
@property (class, readonly) PlanetlinkCoreEmojiType *lovehotel __attribute__((swift_name("lovehotel")));
@property (class, readonly) PlanetlinkCoreEmojiType *conveniencestore __attribute__((swift_name("conveniencestore")));
@property (class, readonly) PlanetlinkCoreEmojiType *school __attribute__((swift_name("school")));
@property (class, readonly) PlanetlinkCoreEmojiType *departmentstore __attribute__((swift_name("departmentstore")));
@property (class, readonly) PlanetlinkCoreEmojiType *factory __attribute__((swift_name("factory")));
@property (class, readonly) PlanetlinkCoreEmojiType *izakayalantern __attribute__((swift_name("izakayalantern")));
@property (class, readonly) PlanetlinkCoreEmojiType *japanesecastle __attribute__((swift_name("japanesecastle")));
@property (class, readonly) PlanetlinkCoreEmojiType *europeancastle __attribute__((swift_name("europeancastle")));
@property (class, readonly) PlanetlinkCoreEmojiType *rainbowflag __attribute__((swift_name("rainbowflag")));
@property (class, readonly) PlanetlinkCoreEmojiType *wavingwhiteflag __attribute__((swift_name("wavingwhiteflag")));
@property (class, readonly) PlanetlinkCoreEmojiType *pirateflag __attribute__((swift_name("pirateflag")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagengland __attribute__((swift_name("flagengland")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagscotland __attribute__((swift_name("flagscotland")));
@property (class, readonly) PlanetlinkCoreEmojiType *flagwales __attribute__((swift_name("flagwales")));
@property (class, readonly) PlanetlinkCoreEmojiType *wavingblackflag __attribute__((swift_name("wavingblackflag")));
@property (class, readonly) PlanetlinkCoreEmojiType *rosette __attribute__((swift_name("rosette")));
@property (class, readonly) PlanetlinkCoreEmojiType *label __attribute__((swift_name("label")));
@property (class, readonly) PlanetlinkCoreEmojiType *badmintonracquetandshuttlecock __attribute__((swift_name("badmintonracquetandshuttlecock")));
@property (class, readonly) PlanetlinkCoreEmojiType *bowandarrow __attribute__((swift_name("bowandarrow")));
@property (class, readonly) PlanetlinkCoreEmojiType *amphora __attribute__((swift_name("amphora")));
@property (class, readonly) PlanetlinkCoreEmojiType *skintone2 __attribute__((swift_name("skintone2")));
@property (class, readonly) PlanetlinkCoreEmojiType *skintone3 __attribute__((swift_name("skintone3")));
@property (class, readonly) PlanetlinkCoreEmojiType *skintone4 __attribute__((swift_name("skintone4")));
@property (class, readonly) PlanetlinkCoreEmojiType *skintone5 __attribute__((swift_name("skintone5")));
@property (class, readonly) PlanetlinkCoreEmojiType *skintone6 __attribute__((swift_name("skintone6")));
@property (class, readonly) PlanetlinkCoreEmojiType *rat __attribute__((swift_name("rat")));
@property (class, readonly) PlanetlinkCoreEmojiType *mouse2 __attribute__((swift_name("mouse2")));
@property (class, readonly) PlanetlinkCoreEmojiType *ox __attribute__((swift_name("ox")));
@property (class, readonly) PlanetlinkCoreEmojiType *waterbuffalo __attribute__((swift_name("waterbuffalo")));
@property (class, readonly) PlanetlinkCoreEmojiType *cow2 __attribute__((swift_name("cow2")));
@property (class, readonly) PlanetlinkCoreEmojiType *tiger2 __attribute__((swift_name("tiger2")));
@property (class, readonly) PlanetlinkCoreEmojiType *leopard __attribute__((swift_name("leopard")));
@property (class, readonly) PlanetlinkCoreEmojiType *rabbit2 __attribute__((swift_name("rabbit2")));
@property (class, readonly) PlanetlinkCoreEmojiType *cat2 __attribute__((swift_name("cat2")));
@property (class, readonly) PlanetlinkCoreEmojiType *dragon __attribute__((swift_name("dragon")));
@property (class, readonly) PlanetlinkCoreEmojiType *crocodile __attribute__((swift_name("crocodile")));
@property (class, readonly) PlanetlinkCoreEmojiType *whale2 __attribute__((swift_name("whale2")));
@property (class, readonly) PlanetlinkCoreEmojiType *snail __attribute__((swift_name("snail")));
@property (class, readonly) PlanetlinkCoreEmojiType *snake __attribute__((swift_name("snake")));
@property (class, readonly) PlanetlinkCoreEmojiType *racehorse __attribute__((swift_name("racehorse")));
@property (class, readonly) PlanetlinkCoreEmojiType *ram __attribute__((swift_name("ram")));
@property (class, readonly) PlanetlinkCoreEmojiType *goat __attribute__((swift_name("goat")));
@property (class, readonly) PlanetlinkCoreEmojiType *sheep __attribute__((swift_name("sheep")));
@property (class, readonly) PlanetlinkCoreEmojiType *monkey __attribute__((swift_name("monkey")));
@property (class, readonly) PlanetlinkCoreEmojiType *rooster __attribute__((swift_name("rooster")));
@property (class, readonly) PlanetlinkCoreEmojiType *chicken __attribute__((swift_name("chicken")));
@property (class, readonly) PlanetlinkCoreEmojiType *servicedog __attribute__((swift_name("servicedog")));
@property (class, readonly) PlanetlinkCoreEmojiType *dog2 __attribute__((swift_name("dog2")));
@property (class, readonly) PlanetlinkCoreEmojiType *pig2 __attribute__((swift_name("pig2")));
@property (class, readonly) PlanetlinkCoreEmojiType *boar __attribute__((swift_name("boar")));
@property (class, readonly) PlanetlinkCoreEmojiType *elephant __attribute__((swift_name("elephant")));
@property (class, readonly) PlanetlinkCoreEmojiType *octopus __attribute__((swift_name("octopus")));
@property (class, readonly) PlanetlinkCoreEmojiType *shell __attribute__((swift_name("shell")));
@property (class, readonly) PlanetlinkCoreEmojiType *bug __attribute__((swift_name("bug")));
@property (class, readonly) PlanetlinkCoreEmojiType *ant __attribute__((swift_name("ant")));
@property (class, readonly) PlanetlinkCoreEmojiType *bee __attribute__((swift_name("bee")));
@property (class, readonly) PlanetlinkCoreEmojiType *beetle __attribute__((swift_name("beetle")));
@property (class, readonly) PlanetlinkCoreEmojiType *fish __attribute__((swift_name("fish")));
@property (class, readonly) PlanetlinkCoreEmojiType *tropicalfish __attribute__((swift_name("tropicalfish")));
@property (class, readonly) PlanetlinkCoreEmojiType *blowfish __attribute__((swift_name("blowfish")));
@property (class, readonly) PlanetlinkCoreEmojiType *turtle __attribute__((swift_name("turtle")));
@property (class, readonly) PlanetlinkCoreEmojiType *hatchingchick __attribute__((swift_name("hatchingchick")));
@property (class, readonly) PlanetlinkCoreEmojiType *babychick __attribute__((swift_name("babychick")));
@property (class, readonly) PlanetlinkCoreEmojiType *hatchedchick __attribute__((swift_name("hatchedchick")));
@property (class, readonly) PlanetlinkCoreEmojiType *bird __attribute__((swift_name("bird")));
@property (class, readonly) PlanetlinkCoreEmojiType *penguin __attribute__((swift_name("penguin")));
@property (class, readonly) PlanetlinkCoreEmojiType *koala __attribute__((swift_name("koala")));
@property (class, readonly) PlanetlinkCoreEmojiType *poodle __attribute__((swift_name("poodle")));
@property (class, readonly) PlanetlinkCoreEmojiType *dromedarycamel __attribute__((swift_name("dromedarycamel")));
@property (class, readonly) PlanetlinkCoreEmojiType *camel __attribute__((swift_name("camel")));
@property (class, readonly) PlanetlinkCoreEmojiType *dolphin __attribute__((swift_name("dolphin")));
@property (class, readonly) PlanetlinkCoreEmojiType *mouse __attribute__((swift_name("mouse")));
@property (class, readonly) PlanetlinkCoreEmojiType *cow __attribute__((swift_name("cow")));
@property (class, readonly) PlanetlinkCoreEmojiType *tiger __attribute__((swift_name("tiger")));
@property (class, readonly) PlanetlinkCoreEmojiType *rabbit __attribute__((swift_name("rabbit")));
@property (class, readonly) PlanetlinkCoreEmojiType *cat __attribute__((swift_name("cat")));
@property (class, readonly) PlanetlinkCoreEmojiType *dragonface __attribute__((swift_name("dragonface")));
@property (class, readonly) PlanetlinkCoreEmojiType *whale __attribute__((swift_name("whale")));
@property (class, readonly) PlanetlinkCoreEmojiType *horse __attribute__((swift_name("horse")));
@property (class, readonly) PlanetlinkCoreEmojiType *monkeyface __attribute__((swift_name("monkeyface")));
@property (class, readonly) PlanetlinkCoreEmojiType *dog __attribute__((swift_name("dog")));
@property (class, readonly) PlanetlinkCoreEmojiType *pig __attribute__((swift_name("pig")));
@property (class, readonly) PlanetlinkCoreEmojiType *frog __attribute__((swift_name("frog")));
@property (class, readonly) PlanetlinkCoreEmojiType *hamster __attribute__((swift_name("hamster")));
@property (class, readonly) PlanetlinkCoreEmojiType *wolf __attribute__((swift_name("wolf")));
@property (class, readonly) PlanetlinkCoreEmojiType *bear __attribute__((swift_name("bear")));
@property (class, readonly) PlanetlinkCoreEmojiType *pandaface __attribute__((swift_name("pandaface")));
@property (class, readonly) PlanetlinkCoreEmojiType *pignose __attribute__((swift_name("pignose")));
@property (class, readonly) PlanetlinkCoreEmojiType *feet __attribute__((swift_name("feet")));
@property (class, readonly) PlanetlinkCoreEmojiType *chipmunk __attribute__((swift_name("chipmunk")));
@property (class, readonly) PlanetlinkCoreEmojiType *eyes __attribute__((swift_name("eyes")));
@property (class, readonly) PlanetlinkCoreEmojiType *eyeinspeechbubble __attribute__((swift_name("eyeinspeechbubble")));
@property (class, readonly) PlanetlinkCoreEmojiType *eye __attribute__((swift_name("eye")));
@property (class, readonly) PlanetlinkCoreEmojiType *ear __attribute__((swift_name("ear")));
@property (class, readonly) PlanetlinkCoreEmojiType *nose __attribute__((swift_name("nose")));
@property (class, readonly) PlanetlinkCoreEmojiType *lips __attribute__((swift_name("lips")));
@property (class, readonly) PlanetlinkCoreEmojiType *tongue __attribute__((swift_name("tongue")));
@property (class, readonly) PlanetlinkCoreEmojiType *pointup2 __attribute__((swift_name("pointup2")));
@property (class, readonly) PlanetlinkCoreEmojiType *pointdown __attribute__((swift_name("pointdown")));
@property (class, readonly) PlanetlinkCoreEmojiType *pointleft __attribute__((swift_name("pointleft")));
@property (class, readonly) PlanetlinkCoreEmojiType *pointright __attribute__((swift_name("pointright")));
@property (class, readonly) PlanetlinkCoreEmojiType *facepunch __attribute__((swift_name("facepunch")));
@property (class, readonly) PlanetlinkCoreEmojiType *wave __attribute__((swift_name("wave")));
@property (class, readonly) PlanetlinkCoreEmojiType *okhand __attribute__((swift_name("okhand")));
@property (class, readonly) PlanetlinkCoreEmojiType *emojiplus1 __attribute__((swift_name("emojiplus1")));
@property (class, readonly) PlanetlinkCoreEmojiType *emojiminus1 __attribute__((swift_name("emojiminus1")));
@property (class, readonly) PlanetlinkCoreEmojiType *clap __attribute__((swift_name("clap")));
@property (class, readonly) PlanetlinkCoreEmojiType *openhands __attribute__((swift_name("openhands")));
@property (class, readonly) PlanetlinkCoreEmojiType *crown __attribute__((swift_name("crown")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanshat __attribute__((swift_name("womanshat")));
@property (class, readonly) PlanetlinkCoreEmojiType *eyeglasses __attribute__((swift_name("eyeglasses")));
@property (class, readonly) PlanetlinkCoreEmojiType *necktie __attribute__((swift_name("necktie")));
@property (class, readonly) PlanetlinkCoreEmojiType *shirt __attribute__((swift_name("shirt")));
@property (class, readonly) PlanetlinkCoreEmojiType *jeans __attribute__((swift_name("jeans")));
@property (class, readonly) PlanetlinkCoreEmojiType *dress __attribute__((swift_name("dress")));
@property (class, readonly) PlanetlinkCoreEmojiType *kimono __attribute__((swift_name("kimono")));
@property (class, readonly) PlanetlinkCoreEmojiType *bikini __attribute__((swift_name("bikini")));
@property (class, readonly) PlanetlinkCoreEmojiType *womansclothes __attribute__((swift_name("womansclothes")));
@property (class, readonly) PlanetlinkCoreEmojiType *purse __attribute__((swift_name("purse")));
@property (class, readonly) PlanetlinkCoreEmojiType *handbag __attribute__((swift_name("handbag")));
@property (class, readonly) PlanetlinkCoreEmojiType *pouch __attribute__((swift_name("pouch")));
@property (class, readonly) PlanetlinkCoreEmojiType *mansshoe __attribute__((swift_name("mansshoe")));
@property (class, readonly) PlanetlinkCoreEmojiType *athleticshoe __attribute__((swift_name("athleticshoe")));
@property (class, readonly) PlanetlinkCoreEmojiType *highheel __attribute__((swift_name("highheel")));
@property (class, readonly) PlanetlinkCoreEmojiType *sandal __attribute__((swift_name("sandal")));
@property (class, readonly) PlanetlinkCoreEmojiType *boot __attribute__((swift_name("boot")));
@property (class, readonly) PlanetlinkCoreEmojiType *footprints __attribute__((swift_name("footprints")));
@property (class, readonly) PlanetlinkCoreEmojiType *bustinsilhouette __attribute__((swift_name("bustinsilhouette")));
@property (class, readonly) PlanetlinkCoreEmojiType *bustsinsilhouette __attribute__((swift_name("bustsinsilhouette")));
@property (class, readonly) PlanetlinkCoreEmojiType *boy __attribute__((swift_name("boy")));
@property (class, readonly) PlanetlinkCoreEmojiType *girl __attribute__((swift_name("girl")));
@property (class, readonly) PlanetlinkCoreEmojiType *malefarmer __attribute__((swift_name("malefarmer")));
@property (class, readonly) PlanetlinkCoreEmojiType *malecook __attribute__((swift_name("malecook")));
@property (class, readonly) PlanetlinkCoreEmojiType *malestudent __attribute__((swift_name("malestudent")));
@property (class, readonly) PlanetlinkCoreEmojiType *malesinger __attribute__((swift_name("malesinger")));
@property (class, readonly) PlanetlinkCoreEmojiType *maleartist __attribute__((swift_name("maleartist")));
@property (class, readonly) PlanetlinkCoreEmojiType *maleteacher __attribute__((swift_name("maleteacher")));
@property (class, readonly) PlanetlinkCoreEmojiType *malefactoryworker __attribute__((swift_name("malefactoryworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *manboyboy __attribute__((swift_name("manboyboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *manboy __attribute__((swift_name("manboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *mangirlboy __attribute__((swift_name("mangirlboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *mangirlgirl __attribute__((swift_name("mangirlgirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *mangirl __attribute__((swift_name("mangirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *manmanboy __attribute__((swift_name("manmanboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *manmanboyboy __attribute__((swift_name("manmanboyboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *manmangirl __attribute__((swift_name("manmangirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *manmangirlboy __attribute__((swift_name("manmangirlboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *manmangirlgirl __attribute__((swift_name("manmangirlgirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwomanboy __attribute__((swift_name("manwomanboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwomanboyboy __attribute__((swift_name("manwomanboyboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwomangirl __attribute__((swift_name("manwomangirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwomangirlboy __attribute__((swift_name("manwomangirlboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwomangirlgirl __attribute__((swift_name("manwomangirlgirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *maletechnologist __attribute__((swift_name("maletechnologist")));
@property (class, readonly) PlanetlinkCoreEmojiType *maleofficeworker __attribute__((swift_name("maleofficeworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *malemechanic __attribute__((swift_name("malemechanic")));
@property (class, readonly) PlanetlinkCoreEmojiType *malescientist __attribute__((swift_name("malescientist")));
@property (class, readonly) PlanetlinkCoreEmojiType *maleastronaut __attribute__((swift_name("maleastronaut")));
@property (class, readonly) PlanetlinkCoreEmojiType *malefirefighter __attribute__((swift_name("malefirefighter")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwithprobingcane __attribute__((swift_name("manwithprobingcane")));
@property (class, readonly) PlanetlinkCoreEmojiType *redhairedman __attribute__((swift_name("redhairedman")));
@property (class, readonly) PlanetlinkCoreEmojiType *curlyhairedman __attribute__((swift_name("curlyhairedman")));
@property (class, readonly) PlanetlinkCoreEmojiType *baldman __attribute__((swift_name("baldman")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitehairedman __attribute__((swift_name("whitehairedman")));
@property (class, readonly) PlanetlinkCoreEmojiType *maninmotorizedwheelchair __attribute__((swift_name("maninmotorizedwheelchair")));
@property (class, readonly) PlanetlinkCoreEmojiType *maninmanualwheelchair __attribute__((swift_name("maninmanualwheelchair")));
@property (class, readonly) PlanetlinkCoreEmojiType *maledoctor __attribute__((swift_name("maledoctor")));
@property (class, readonly) PlanetlinkCoreEmojiType *malejudge __attribute__((swift_name("malejudge")));
@property (class, readonly) PlanetlinkCoreEmojiType *malepilot __attribute__((swift_name("malepilot")));
@property (class, readonly) PlanetlinkCoreEmojiType *manheartman __attribute__((swift_name("manheartman")));
@property (class, readonly) PlanetlinkCoreEmojiType *mankissman __attribute__((swift_name("mankissman")));
@property (class, readonly) PlanetlinkCoreEmojiType *man __attribute__((swift_name("man")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalefarmer __attribute__((swift_name("femalefarmer")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalecook __attribute__((swift_name("femalecook")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalestudent __attribute__((swift_name("femalestudent")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalesinger __attribute__((swift_name("femalesinger")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaleartist __attribute__((swift_name("femaleartist")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaleteacher __attribute__((swift_name("femaleteacher")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalefactoryworker __attribute__((swift_name("femalefactoryworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanboyboy __attribute__((swift_name("womanboyboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanboy __attribute__((swift_name("womanboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *womangirlboy __attribute__((swift_name("womangirlboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *womangirlgirl __attribute__((swift_name("womangirlgirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *womangirl __attribute__((swift_name("womangirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwomanboy __attribute__((swift_name("womanwomanboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwomanboyboy __attribute__((swift_name("womanwomanboyboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwomangirl __attribute__((swift_name("womanwomangirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwomangirlboy __attribute__((swift_name("womanwomangirlboy")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwomangirlgirl __attribute__((swift_name("womanwomangirlgirl")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaletechnologist __attribute__((swift_name("femaletechnologist")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaleofficeworker __attribute__((swift_name("femaleofficeworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalemechanic __attribute__((swift_name("femalemechanic")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalescientist __attribute__((swift_name("femalescientist")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaleastronaut __attribute__((swift_name("femaleastronaut")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalefirefighter __attribute__((swift_name("femalefirefighter")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwithprobingcane __attribute__((swift_name("womanwithprobingcane")));
@property (class, readonly) PlanetlinkCoreEmojiType *redhairedwoman __attribute__((swift_name("redhairedwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *curlyhairedwoman __attribute__((swift_name("curlyhairedwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *baldwoman __attribute__((swift_name("baldwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitehairedwoman __attribute__((swift_name("whitehairedwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *womaninmotorizedwheelchair __attribute__((swift_name("womaninmotorizedwheelchair")));
@property (class, readonly) PlanetlinkCoreEmojiType *womaninmanualwheelchair __attribute__((swift_name("womaninmanualwheelchair")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaledoctor __attribute__((swift_name("femaledoctor")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalejudge __attribute__((swift_name("femalejudge")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalepilot __attribute__((swift_name("femalepilot")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanheartman __attribute__((swift_name("womanheartman")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanheartwoman __attribute__((swift_name("womanheartwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *womankissman __attribute__((swift_name("womankissman")));
@property (class, readonly) PlanetlinkCoreEmojiType *womankisswoman __attribute__((swift_name("womankisswoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *woman __attribute__((swift_name("woman")));
@property (class, readonly) PlanetlinkCoreEmojiType *family __attribute__((swift_name("family")));
@property (class, readonly) PlanetlinkCoreEmojiType *couple __attribute__((swift_name("couple")));
@property (class, readonly) PlanetlinkCoreEmojiType *twomenholdinghands __attribute__((swift_name("twomenholdinghands")));
@property (class, readonly) PlanetlinkCoreEmojiType *twowomenholdinghands __attribute__((swift_name("twowomenholdinghands")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalepoliceofficer __attribute__((swift_name("femalepoliceofficer")));
@property (class, readonly) PlanetlinkCoreEmojiType *malepoliceofficer __attribute__((swift_name("malepoliceofficer")));
@property (class, readonly) PlanetlinkCoreEmojiType *cop __attribute__((swift_name("cop")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwithbunnyearspartying __attribute__((swift_name("womanwithbunnyearspartying")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwithbunnyearspartying __attribute__((swift_name("manwithbunnyearspartying")));
@property (class, readonly) PlanetlinkCoreEmojiType *dancers __attribute__((swift_name("dancers")));
@property (class, readonly) PlanetlinkCoreEmojiType *bridewithveil __attribute__((swift_name("bridewithveil")));
@property (class, readonly) PlanetlinkCoreEmojiType *blondhairedwoman __attribute__((swift_name("blondhairedwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *blondhairedman __attribute__((swift_name("blondhairedman")));
@property (class, readonly) PlanetlinkCoreEmojiType *personwithblondhair __attribute__((swift_name("personwithblondhair")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwithguapimao __attribute__((swift_name("manwithguapimao")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwearingturban __attribute__((swift_name("womanwearingturban")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwearingturban __attribute__((swift_name("manwearingturban")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwithturban __attribute__((swift_name("manwithturban")));
@property (class, readonly) PlanetlinkCoreEmojiType *olderman __attribute__((swift_name("olderman")));
@property (class, readonly) PlanetlinkCoreEmojiType *olderwoman __attribute__((swift_name("olderwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *baby __attribute__((swift_name("baby")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaleconstructionworker __attribute__((swift_name("femaleconstructionworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *maleconstructionworker __attribute__((swift_name("maleconstructionworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *constructionworker __attribute__((swift_name("constructionworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *princess __attribute__((swift_name("princess")));
@property (class, readonly) PlanetlinkCoreEmojiType *japaneseogre __attribute__((swift_name("japaneseogre")));
@property (class, readonly) PlanetlinkCoreEmojiType *japanesegoblin __attribute__((swift_name("japanesegoblin")));
@property (class, readonly) PlanetlinkCoreEmojiType *ghost __attribute__((swift_name("ghost")));
@property (class, readonly) PlanetlinkCoreEmojiType *angel __attribute__((swift_name("angel")));
@property (class, readonly) PlanetlinkCoreEmojiType *alien __attribute__((swift_name("alien")));
@property (class, readonly) PlanetlinkCoreEmojiType *spaceinvader __attribute__((swift_name("spaceinvader")));
@property (class, readonly) PlanetlinkCoreEmojiType *imp __attribute__((swift_name("imp")));
@property (class, readonly) PlanetlinkCoreEmojiType *skull __attribute__((swift_name("skull")));
@property (class, readonly) PlanetlinkCoreEmojiType *womantippinghand __attribute__((swift_name("womantippinghand")));
@property (class, readonly) PlanetlinkCoreEmojiType *mantippinghand __attribute__((swift_name("mantippinghand")));
@property (class, readonly) PlanetlinkCoreEmojiType *informationdeskperson __attribute__((swift_name("informationdeskperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaleguard __attribute__((swift_name("femaleguard")));
@property (class, readonly) PlanetlinkCoreEmojiType *maleguard __attribute__((swift_name("maleguard")));
@property (class, readonly) PlanetlinkCoreEmojiType *guardsman __attribute__((swift_name("guardsman")));
@property (class, readonly) PlanetlinkCoreEmojiType *dancer __attribute__((swift_name("dancer")));
@property (class, readonly) PlanetlinkCoreEmojiType *lipstick __attribute__((swift_name("lipstick")));
@property (class, readonly) PlanetlinkCoreEmojiType *nailcare __attribute__((swift_name("nailcare")));
@property (class, readonly) PlanetlinkCoreEmojiType *womangettingmassage __attribute__((swift_name("womangettingmassage")));
@property (class, readonly) PlanetlinkCoreEmojiType *mangettingmassage __attribute__((swift_name("mangettingmassage")));
@property (class, readonly) PlanetlinkCoreEmojiType *massage __attribute__((swift_name("massage")));
@property (class, readonly) PlanetlinkCoreEmojiType *womangettinghaircut __attribute__((swift_name("womangettinghaircut")));
@property (class, readonly) PlanetlinkCoreEmojiType *mangettinghaircut __attribute__((swift_name("mangettinghaircut")));
@property (class, readonly) PlanetlinkCoreEmojiType *haircut __attribute__((swift_name("haircut")));
@property (class, readonly) PlanetlinkCoreEmojiType *barber __attribute__((swift_name("barber")));
@property (class, readonly) PlanetlinkCoreEmojiType *syringe __attribute__((swift_name("syringe")));
@property (class, readonly) PlanetlinkCoreEmojiType *pill __attribute__((swift_name("pill")));
@property (class, readonly) PlanetlinkCoreEmojiType *kiss __attribute__((swift_name("kiss")));
@property (class, readonly) PlanetlinkCoreEmojiType *loveletter __attribute__((swift_name("loveletter")));
@property (class, readonly) PlanetlinkCoreEmojiType *ring __attribute__((swift_name("ring")));
@property (class, readonly) PlanetlinkCoreEmojiType *gem __attribute__((swift_name("gem")));
@property (class, readonly) PlanetlinkCoreEmojiType *couplekiss __attribute__((swift_name("couplekiss")));
@property (class, readonly) PlanetlinkCoreEmojiType *bouquet __attribute__((swift_name("bouquet")));
@property (class, readonly) PlanetlinkCoreEmojiType *couplewithheart __attribute__((swift_name("couplewithheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *wedding __attribute__((swift_name("wedding")));
@property (class, readonly) PlanetlinkCoreEmojiType *heartbeat __attribute__((swift_name("heartbeat")));
@property (class, readonly) PlanetlinkCoreEmojiType *brokenheart __attribute__((swift_name("brokenheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *twohearts __attribute__((swift_name("twohearts")));
@property (class, readonly) PlanetlinkCoreEmojiType *sparklingheart __attribute__((swift_name("sparklingheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *heartpulse __attribute__((swift_name("heartpulse")));
@property (class, readonly) PlanetlinkCoreEmojiType *cupid __attribute__((swift_name("cupid")));
@property (class, readonly) PlanetlinkCoreEmojiType *blueheart __attribute__((swift_name("blueheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *greenheart __attribute__((swift_name("greenheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *yellowheart __attribute__((swift_name("yellowheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *purpleheart __attribute__((swift_name("purpleheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *giftheart __attribute__((swift_name("giftheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *revolvinghearts __attribute__((swift_name("revolvinghearts")));
@property (class, readonly) PlanetlinkCoreEmojiType *heartdecoration __attribute__((swift_name("heartdecoration")));
@property (class, readonly) PlanetlinkCoreEmojiType *diamondshapewithadotinside __attribute__((swift_name("diamondshapewithadotinside")));
@property (class, readonly) PlanetlinkCoreEmojiType *bulb __attribute__((swift_name("bulb")));
@property (class, readonly) PlanetlinkCoreEmojiType *anger __attribute__((swift_name("anger")));
@property (class, readonly) PlanetlinkCoreEmojiType *bomb __attribute__((swift_name("bomb")));
@property (class, readonly) PlanetlinkCoreEmojiType *zzz __attribute__((swift_name("zzz")));
@property (class, readonly) PlanetlinkCoreEmojiType *boom __attribute__((swift_name("boom")));
@property (class, readonly) PlanetlinkCoreEmojiType *sweatdrops __attribute__((swift_name("sweatdrops")));
@property (class, readonly) PlanetlinkCoreEmojiType *droplet __attribute__((swift_name("droplet")));
@property (class, readonly) PlanetlinkCoreEmojiType *dash __attribute__((swift_name("dash")));
@property (class, readonly) PlanetlinkCoreEmojiType *hankey __attribute__((swift_name("hankey")));
@property (class, readonly) PlanetlinkCoreEmojiType *muscle __attribute__((swift_name("muscle")));
@property (class, readonly) PlanetlinkCoreEmojiType *dizzy __attribute__((swift_name("dizzy")));
@property (class, readonly) PlanetlinkCoreEmojiType *speechballoon __attribute__((swift_name("speechballoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *thoughtballoon __attribute__((swift_name("thoughtballoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *whiteflower __attribute__((swift_name("whiteflower")));
@property (class, readonly) PlanetlinkCoreEmojiType *emoji100 __attribute__((swift_name("emoji100")));
@property (class, readonly) PlanetlinkCoreEmojiType *moneybag __attribute__((swift_name("moneybag")));
@property (class, readonly) PlanetlinkCoreEmojiType *currencyexchange __attribute__((swift_name("currencyexchange")));
@property (class, readonly) PlanetlinkCoreEmojiType *heavydollarsign __attribute__((swift_name("heavydollarsign")));
@property (class, readonly) PlanetlinkCoreEmojiType *creditcard __attribute__((swift_name("creditcard")));
@property (class, readonly) PlanetlinkCoreEmojiType *yen __attribute__((swift_name("yen")));
@property (class, readonly) PlanetlinkCoreEmojiType *dollar __attribute__((swift_name("dollar")));
@property (class, readonly) PlanetlinkCoreEmojiType *euro __attribute__((swift_name("euro")));
@property (class, readonly) PlanetlinkCoreEmojiType *pound __attribute__((swift_name("pound")));
@property (class, readonly) PlanetlinkCoreEmojiType *moneywithwings __attribute__((swift_name("moneywithwings")));
@property (class, readonly) PlanetlinkCoreEmojiType *chart __attribute__((swift_name("chart")));
@property (class, readonly) PlanetlinkCoreEmojiType *seat __attribute__((swift_name("seat")));
@property (class, readonly) PlanetlinkCoreEmojiType *computer __attribute__((swift_name("computer")));
@property (class, readonly) PlanetlinkCoreEmojiType *briefcase __attribute__((swift_name("briefcase")));
@property (class, readonly) PlanetlinkCoreEmojiType *minidisc __attribute__((swift_name("minidisc")));
@property (class, readonly) PlanetlinkCoreEmojiType *floppydisk __attribute__((swift_name("floppydisk")));
@property (class, readonly) PlanetlinkCoreEmojiType *cd __attribute__((swift_name("cd")));
@property (class, readonly) PlanetlinkCoreEmojiType *dvd __attribute__((swift_name("dvd")));
@property (class, readonly) PlanetlinkCoreEmojiType *filefolder __attribute__((swift_name("filefolder")));
@property (class, readonly) PlanetlinkCoreEmojiType *openfilefolder __attribute__((swift_name("openfilefolder")));
@property (class, readonly) PlanetlinkCoreEmojiType *pagewithcurl __attribute__((swift_name("pagewithcurl")));
@property (class, readonly) PlanetlinkCoreEmojiType *pagefacingup __attribute__((swift_name("pagefacingup")));
@property (class, readonly) PlanetlinkCoreEmojiType *date __attribute__((swift_name("date")));
@property (class, readonly) PlanetlinkCoreEmojiType *calendar __attribute__((swift_name("calendar")));
@property (class, readonly) PlanetlinkCoreEmojiType *cardindex __attribute__((swift_name("cardindex")));
@property (class, readonly) PlanetlinkCoreEmojiType *chartwithupwardstrend __attribute__((swift_name("chartwithupwardstrend")));
@property (class, readonly) PlanetlinkCoreEmojiType *chartwithdownwardstrend __attribute__((swift_name("chartwithdownwardstrend")));
@property (class, readonly) PlanetlinkCoreEmojiType *barchart __attribute__((swift_name("barchart")));
@property (class, readonly) PlanetlinkCoreEmojiType *clipboard __attribute__((swift_name("clipboard")));
@property (class, readonly) PlanetlinkCoreEmojiType *pushpin __attribute__((swift_name("pushpin")));
@property (class, readonly) PlanetlinkCoreEmojiType *roundpushpin __attribute__((swift_name("roundpushpin")));
@property (class, readonly) PlanetlinkCoreEmojiType *paperclip __attribute__((swift_name("paperclip")));
@property (class, readonly) PlanetlinkCoreEmojiType *straightruler __attribute__((swift_name("straightruler")));
@property (class, readonly) PlanetlinkCoreEmojiType *triangularruler __attribute__((swift_name("triangularruler")));
@property (class, readonly) PlanetlinkCoreEmojiType *bookmarktabs __attribute__((swift_name("bookmarktabs")));
@property (class, readonly) PlanetlinkCoreEmojiType *ledger __attribute__((swift_name("ledger")));
@property (class, readonly) PlanetlinkCoreEmojiType *notebook __attribute__((swift_name("notebook")));
@property (class, readonly) PlanetlinkCoreEmojiType *notebookwithdecorativecover __attribute__((swift_name("notebookwithdecorativecover")));
@property (class, readonly) PlanetlinkCoreEmojiType *closedbook __attribute__((swift_name("closedbook")));
@property (class, readonly) PlanetlinkCoreEmojiType *book __attribute__((swift_name("book")));
@property (class, readonly) PlanetlinkCoreEmojiType *greenbook __attribute__((swift_name("greenbook")));
@property (class, readonly) PlanetlinkCoreEmojiType *bluebook __attribute__((swift_name("bluebook")));
@property (class, readonly) PlanetlinkCoreEmojiType *orangebook __attribute__((swift_name("orangebook")));
@property (class, readonly) PlanetlinkCoreEmojiType *books __attribute__((swift_name("books")));
@property (class, readonly) PlanetlinkCoreEmojiType *namebadge __attribute__((swift_name("namebadge")));
@property (class, readonly) PlanetlinkCoreEmojiType *scroll __attribute__((swift_name("scroll")));
@property (class, readonly) PlanetlinkCoreEmojiType *memo __attribute__((swift_name("memo")));
@property (class, readonly) PlanetlinkCoreEmojiType *telephonereceiver __attribute__((swift_name("telephonereceiver")));
@property (class, readonly) PlanetlinkCoreEmojiType *pager __attribute__((swift_name("pager")));
@property (class, readonly) PlanetlinkCoreEmojiType *fax __attribute__((swift_name("fax")));
@property (class, readonly) PlanetlinkCoreEmojiType *satelliteantenna __attribute__((swift_name("satelliteantenna")));
@property (class, readonly) PlanetlinkCoreEmojiType *loudspeaker __attribute__((swift_name("loudspeaker")));
@property (class, readonly) PlanetlinkCoreEmojiType *mega __attribute__((swift_name("mega")));
@property (class, readonly) PlanetlinkCoreEmojiType *outboxtray __attribute__((swift_name("outboxtray")));
@property (class, readonly) PlanetlinkCoreEmojiType *inboxtray __attribute__((swift_name("inboxtray")));
@property (class, readonly) PlanetlinkCoreEmojiType *package __attribute__((swift_name("package")));
@property (class, readonly) PlanetlinkCoreEmojiType *email __attribute__((swift_name("email")));
@property (class, readonly) PlanetlinkCoreEmojiType *incomingenvelope __attribute__((swift_name("incomingenvelope")));
@property (class, readonly) PlanetlinkCoreEmojiType *envelopewitharrow __attribute__((swift_name("envelopewitharrow")));
@property (class, readonly) PlanetlinkCoreEmojiType *mailboxclosed __attribute__((swift_name("mailboxclosed")));
@property (class, readonly) PlanetlinkCoreEmojiType *mailbox __attribute__((swift_name("mailbox")));
@property (class, readonly) PlanetlinkCoreEmojiType *mailboxwithmail __attribute__((swift_name("mailboxwithmail")));
@property (class, readonly) PlanetlinkCoreEmojiType *mailboxwithnomail __attribute__((swift_name("mailboxwithnomail")));
@property (class, readonly) PlanetlinkCoreEmojiType *postbox __attribute__((swift_name("postbox")));
@property (class, readonly) PlanetlinkCoreEmojiType *postalhorn __attribute__((swift_name("postalhorn")));
@property (class, readonly) PlanetlinkCoreEmojiType *newspaper __attribute__((swift_name("newspaper")));
@property (class, readonly) PlanetlinkCoreEmojiType *iphone __attribute__((swift_name("iphone")));
@property (class, readonly) PlanetlinkCoreEmojiType *calling __attribute__((swift_name("calling")));
@property (class, readonly) PlanetlinkCoreEmojiType *vibrationmode __attribute__((swift_name("vibrationmode")));
@property (class, readonly) PlanetlinkCoreEmojiType *mobilephoneoff __attribute__((swift_name("mobilephoneoff")));
@property (class, readonly) PlanetlinkCoreEmojiType *nomobilephones __attribute__((swift_name("nomobilephones")));
@property (class, readonly) PlanetlinkCoreEmojiType *signalstrength __attribute__((swift_name("signalstrength")));
@property (class, readonly) PlanetlinkCoreEmojiType *camera __attribute__((swift_name("camera")));
@property (class, readonly) PlanetlinkCoreEmojiType *camerawithflash __attribute__((swift_name("camerawithflash")));
@property (class, readonly) PlanetlinkCoreEmojiType *videocamera __attribute__((swift_name("videocamera")));
@property (class, readonly) PlanetlinkCoreEmojiType *tv __attribute__((swift_name("tv")));
@property (class, readonly) PlanetlinkCoreEmojiType *radio __attribute__((swift_name("radio")));
@property (class, readonly) PlanetlinkCoreEmojiType *vhs __attribute__((swift_name("vhs")));
@property (class, readonly) PlanetlinkCoreEmojiType *filmprojector __attribute__((swift_name("filmprojector")));
@property (class, readonly) PlanetlinkCoreEmojiType *prayerbeads __attribute__((swift_name("prayerbeads")));
@property (class, readonly) PlanetlinkCoreEmojiType *twistedrightwardsarrows __attribute__((swift_name("twistedrightwardsarrows")));
@property (class, readonly) PlanetlinkCoreEmojiType *repeat __attribute__((swift_name("repeat")));
@property (class, readonly) PlanetlinkCoreEmojiType *repeatone __attribute__((swift_name("repeatone")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowsclockwise __attribute__((swift_name("arrowsclockwise")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowscounterclockwise __attribute__((swift_name("arrowscounterclockwise")));
@property (class, readonly) PlanetlinkCoreEmojiType *lowbrightness __attribute__((swift_name("lowbrightness")));
@property (class, readonly) PlanetlinkCoreEmojiType *highbrightness __attribute__((swift_name("highbrightness")));
@property (class, readonly) PlanetlinkCoreEmojiType *mute __attribute__((swift_name("mute")));
@property (class, readonly) PlanetlinkCoreEmojiType *speaker __attribute__((swift_name("speaker")));
@property (class, readonly) PlanetlinkCoreEmojiType *sound __attribute__((swift_name("sound")));
@property (class, readonly) PlanetlinkCoreEmojiType *loudsound __attribute__((swift_name("loudsound")));
@property (class, readonly) PlanetlinkCoreEmojiType *battery __attribute__((swift_name("battery")));
@property (class, readonly) PlanetlinkCoreEmojiType *electricplug __attribute__((swift_name("electricplug")));
@property (class, readonly) PlanetlinkCoreEmojiType *mag __attribute__((swift_name("mag")));
@property (class, readonly) PlanetlinkCoreEmojiType *magright __attribute__((swift_name("magright")));
@property (class, readonly) PlanetlinkCoreEmojiType *lockwithinkpen __attribute__((swift_name("lockwithinkpen")));
@property (class, readonly) PlanetlinkCoreEmojiType *closedlockwithkey __attribute__((swift_name("closedlockwithkey")));
@property (class, readonly) PlanetlinkCoreEmojiType *key __attribute__((swift_name("key")));
@property (class, readonly) PlanetlinkCoreEmojiType *lock __attribute__((swift_name("lock")));
@property (class, readonly) PlanetlinkCoreEmojiType *unlock __attribute__((swift_name("unlock")));
@property (class, readonly) PlanetlinkCoreEmojiType *bell __attribute__((swift_name("bell")));
@property (class, readonly) PlanetlinkCoreEmojiType *nobell __attribute__((swift_name("nobell")));
@property (class, readonly) PlanetlinkCoreEmojiType *bookmark __attribute__((swift_name("bookmark")));
@property (class, readonly) PlanetlinkCoreEmojiType *link __attribute__((swift_name("link")));
@property (class, readonly) PlanetlinkCoreEmojiType *radiobutton __attribute__((swift_name("radiobutton")));
@property (class, readonly) PlanetlinkCoreEmojiType *back __attribute__((swift_name("back")));
@property (class, readonly) PlanetlinkCoreEmojiType *end __attribute__((swift_name("end")));
@property (class, readonly) PlanetlinkCoreEmojiType *on __attribute__((swift_name("on")));
@property (class, readonly) PlanetlinkCoreEmojiType *soon __attribute__((swift_name("soon")));
@property (class, readonly) PlanetlinkCoreEmojiType *top __attribute__((swift_name("top")));
@property (class, readonly) PlanetlinkCoreEmojiType *underage __attribute__((swift_name("underage")));
@property (class, readonly) PlanetlinkCoreEmojiType *keycapten __attribute__((swift_name("keycapten")));
@property (class, readonly) PlanetlinkCoreEmojiType *capitalabcd __attribute__((swift_name("capitalabcd")));
@property (class, readonly) PlanetlinkCoreEmojiType *abcd __attribute__((swift_name("abcd")));
@property (class, readonly) PlanetlinkCoreEmojiType *emoji1234 __attribute__((swift_name("emoji1234")));
@property (class, readonly) PlanetlinkCoreEmojiType *symbols __attribute__((swift_name("symbols")));
@property (class, readonly) PlanetlinkCoreEmojiType *abc __attribute__((swift_name("abc")));
@property (class, readonly) PlanetlinkCoreEmojiType *fire __attribute__((swift_name("fire")));
@property (class, readonly) PlanetlinkCoreEmojiType *flashlight __attribute__((swift_name("flashlight")));
@property (class, readonly) PlanetlinkCoreEmojiType *wrench __attribute__((swift_name("wrench")));
@property (class, readonly) PlanetlinkCoreEmojiType *hammer __attribute__((swift_name("hammer")));
@property (class, readonly) PlanetlinkCoreEmojiType *nutandbolt __attribute__((swift_name("nutandbolt")));
@property (class, readonly) PlanetlinkCoreEmojiType *hocho __attribute__((swift_name("hocho")));
@property (class, readonly) PlanetlinkCoreEmojiType *gun __attribute__((swift_name("gun")));
@property (class, readonly) PlanetlinkCoreEmojiType *microscope __attribute__((swift_name("microscope")));
@property (class, readonly) PlanetlinkCoreEmojiType *telescope __attribute__((swift_name("telescope")));
@property (class, readonly) PlanetlinkCoreEmojiType *crystalball __attribute__((swift_name("crystalball")));
@property (class, readonly) PlanetlinkCoreEmojiType *sixpointedstar __attribute__((swift_name("sixpointedstar")));
@property (class, readonly) PlanetlinkCoreEmojiType *beginner __attribute__((swift_name("beginner")));
@property (class, readonly) PlanetlinkCoreEmojiType *trident __attribute__((swift_name("trident")));
@property (class, readonly) PlanetlinkCoreEmojiType *blacksquarebutton __attribute__((swift_name("blacksquarebutton")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitesquarebutton __attribute__((swift_name("whitesquarebutton")));
@property (class, readonly) PlanetlinkCoreEmojiType *redcircle __attribute__((swift_name("redcircle")));
@property (class, readonly) PlanetlinkCoreEmojiType *largebluecircle __attribute__((swift_name("largebluecircle")));
@property (class, readonly) PlanetlinkCoreEmojiType *largeorangediamond __attribute__((swift_name("largeorangediamond")));
@property (class, readonly) PlanetlinkCoreEmojiType *largebluediamond __attribute__((swift_name("largebluediamond")));
@property (class, readonly) PlanetlinkCoreEmojiType *smallorangediamond __attribute__((swift_name("smallorangediamond")));
@property (class, readonly) PlanetlinkCoreEmojiType *smallbluediamond __attribute__((swift_name("smallbluediamond")));
@property (class, readonly) PlanetlinkCoreEmojiType *smallredtriangle __attribute__((swift_name("smallredtriangle")));
@property (class, readonly) PlanetlinkCoreEmojiType *smallredtriangledown __attribute__((swift_name("smallredtriangledown")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowupsmall __attribute__((swift_name("arrowupsmall")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowdownsmall __attribute__((swift_name("arrowdownsmall")));
@property (class, readonly) PlanetlinkCoreEmojiType *omsymbol __attribute__((swift_name("omsymbol")));
@property (class, readonly) PlanetlinkCoreEmojiType *doveofpeace __attribute__((swift_name("doveofpeace")));
@property (class, readonly) PlanetlinkCoreEmojiType *kaaba __attribute__((swift_name("kaaba")));
@property (class, readonly) PlanetlinkCoreEmojiType *mosque __attribute__((swift_name("mosque")));
@property (class, readonly) PlanetlinkCoreEmojiType *synagogue __attribute__((swift_name("synagogue")));
@property (class, readonly) PlanetlinkCoreEmojiType *menorahwithninebranches __attribute__((swift_name("menorahwithninebranches")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock1 __attribute__((swift_name("clock1")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock2 __attribute__((swift_name("clock2")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock3 __attribute__((swift_name("clock3")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock4 __attribute__((swift_name("clock4")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock5 __attribute__((swift_name("clock5")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock6 __attribute__((swift_name("clock6")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock7 __attribute__((swift_name("clock7")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock8 __attribute__((swift_name("clock8")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock9 __attribute__((swift_name("clock9")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock10 __attribute__((swift_name("clock10")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock11 __attribute__((swift_name("clock11")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock12 __attribute__((swift_name("clock12")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock130 __attribute__((swift_name("clock130")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock230 __attribute__((swift_name("clock230")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock330 __attribute__((swift_name("clock330")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock430 __attribute__((swift_name("clock430")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock530 __attribute__((swift_name("clock530")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock630 __attribute__((swift_name("clock630")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock730 __attribute__((swift_name("clock730")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock830 __attribute__((swift_name("clock830")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock930 __attribute__((swift_name("clock930")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock1030 __attribute__((swift_name("clock1030")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock1130 __attribute__((swift_name("clock1130")));
@property (class, readonly) PlanetlinkCoreEmojiType *clock1230 __attribute__((swift_name("clock1230")));
@property (class, readonly) PlanetlinkCoreEmojiType *candle __attribute__((swift_name("candle")));
@property (class, readonly) PlanetlinkCoreEmojiType *mantelpiececlock __attribute__((swift_name("mantelpiececlock")));
@property (class, readonly) PlanetlinkCoreEmojiType *hole __attribute__((swift_name("hole")));
@property (class, readonly) PlanetlinkCoreEmojiType *maninbusinesssuitlevitating __attribute__((swift_name("maninbusinesssuitlevitating")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaledetective __attribute__((swift_name("femaledetective")));
@property (class, readonly) PlanetlinkCoreEmojiType *maledetective __attribute__((swift_name("maledetective")));
@property (class, readonly) PlanetlinkCoreEmojiType *sleuthorspy __attribute__((swift_name("sleuthorspy")));
@property (class, readonly) PlanetlinkCoreEmojiType *darksunglasses __attribute__((swift_name("darksunglasses")));
@property (class, readonly) PlanetlinkCoreEmojiType *spider __attribute__((swift_name("spider")));
@property (class, readonly) PlanetlinkCoreEmojiType *spiderweb __attribute__((swift_name("spiderweb")));
@property (class, readonly) PlanetlinkCoreEmojiType *joystick __attribute__((swift_name("joystick")));
@property (class, readonly) PlanetlinkCoreEmojiType *mandancing __attribute__((swift_name("mandancing")));
@property (class, readonly) PlanetlinkCoreEmojiType *linkedpaperclips __attribute__((swift_name("linkedpaperclips")));
@property (class, readonly) PlanetlinkCoreEmojiType *lowerleftballpointpen __attribute__((swift_name("lowerleftballpointpen")));
@property (class, readonly) PlanetlinkCoreEmojiType *lowerleftfountainpen __attribute__((swift_name("lowerleftfountainpen")));
@property (class, readonly) PlanetlinkCoreEmojiType *lowerleftpaintbrush __attribute__((swift_name("lowerleftpaintbrush")));
@property (class, readonly) PlanetlinkCoreEmojiType *lowerleftcrayon __attribute__((swift_name("lowerleftcrayon")));
@property (class, readonly) PlanetlinkCoreEmojiType *raisedhandwithfingerssplayed __attribute__((swift_name("raisedhandwithfingerssplayed")));
@property (class, readonly) PlanetlinkCoreEmojiType *middlefinger __attribute__((swift_name("middlefinger")));
@property (class, readonly) PlanetlinkCoreEmojiType *spockhand __attribute__((swift_name("spockhand")));
@property (class, readonly) PlanetlinkCoreEmojiType *blackheart __attribute__((swift_name("blackheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *desktopcomputer __attribute__((swift_name("desktopcomputer")));
@property (class, readonly) PlanetlinkCoreEmojiType *printer __attribute__((swift_name("printer")));
@property (class, readonly) PlanetlinkCoreEmojiType *threebuttonmouse __attribute__((swift_name("threebuttonmouse")));
@property (class, readonly) PlanetlinkCoreEmojiType *trackball __attribute__((swift_name("trackball")));
@property (class, readonly) PlanetlinkCoreEmojiType *framewithpicture __attribute__((swift_name("framewithpicture")));
@property (class, readonly) PlanetlinkCoreEmojiType *cardindexdividers __attribute__((swift_name("cardindexdividers")));
@property (class, readonly) PlanetlinkCoreEmojiType *cardfilebox __attribute__((swift_name("cardfilebox")));
@property (class, readonly) PlanetlinkCoreEmojiType *filecabinet __attribute__((swift_name("filecabinet")));
@property (class, readonly) PlanetlinkCoreEmojiType *wastebasket __attribute__((swift_name("wastebasket")));
@property (class, readonly) PlanetlinkCoreEmojiType *spiralnotepad __attribute__((swift_name("spiralnotepad")));
@property (class, readonly) PlanetlinkCoreEmojiType *spiralcalendarpad __attribute__((swift_name("spiralcalendarpad")));
@property (class, readonly) PlanetlinkCoreEmojiType *compression __attribute__((swift_name("compression")));
@property (class, readonly) PlanetlinkCoreEmojiType *oldkey __attribute__((swift_name("oldkey")));
@property (class, readonly) PlanetlinkCoreEmojiType *rolledupnewspaper __attribute__((swift_name("rolledupnewspaper")));
@property (class, readonly) PlanetlinkCoreEmojiType *daggerknife __attribute__((swift_name("daggerknife")));
@property (class, readonly) PlanetlinkCoreEmojiType *speakingheadinsilhouette __attribute__((swift_name("speakingheadinsilhouette")));
@property (class, readonly) PlanetlinkCoreEmojiType *leftspeechbubble __attribute__((swift_name("leftspeechbubble")));
@property (class, readonly) PlanetlinkCoreEmojiType *rightangerbubble __attribute__((swift_name("rightangerbubble")));
@property (class, readonly) PlanetlinkCoreEmojiType *ballotboxwithballot __attribute__((swift_name("ballotboxwithballot")));
@property (class, readonly) PlanetlinkCoreEmojiType *worldmap __attribute__((swift_name("worldmap")));
@property (class, readonly) PlanetlinkCoreEmojiType *mountfuji __attribute__((swift_name("mountfuji")));
@property (class, readonly) PlanetlinkCoreEmojiType *tokyotower __attribute__((swift_name("tokyotower")));
@property (class, readonly) PlanetlinkCoreEmojiType *statueofliberty __attribute__((swift_name("statueofliberty")));
@property (class, readonly) PlanetlinkCoreEmojiType *japan __attribute__((swift_name("japan")));
@property (class, readonly) PlanetlinkCoreEmojiType *moyai __attribute__((swift_name("moyai")));
@property (class, readonly) PlanetlinkCoreEmojiType *grinning __attribute__((swift_name("grinning")));
@property (class, readonly) PlanetlinkCoreEmojiType *grin __attribute__((swift_name("grin")));
@property (class, readonly) PlanetlinkCoreEmojiType *joy __attribute__((swift_name("joy")));
@property (class, readonly) PlanetlinkCoreEmojiType *smiley __attribute__((swift_name("smiley")));
@property (class, readonly) PlanetlinkCoreEmojiType *smile __attribute__((swift_name("smile")));
@property (class, readonly) PlanetlinkCoreEmojiType *sweatsmile __attribute__((swift_name("sweatsmile")));
@property (class, readonly) PlanetlinkCoreEmojiType *laughing __attribute__((swift_name("laughing")));
@property (class, readonly) PlanetlinkCoreEmojiType *innocent __attribute__((swift_name("innocent")));
@property (class, readonly) PlanetlinkCoreEmojiType *smilingimp __attribute__((swift_name("smilingimp")));
@property (class, readonly) PlanetlinkCoreEmojiType *wink __attribute__((swift_name("wink")));
@property (class, readonly) PlanetlinkCoreEmojiType *blush __attribute__((swift_name("blush")));
@property (class, readonly) PlanetlinkCoreEmojiType *yum __attribute__((swift_name("yum")));
@property (class, readonly) PlanetlinkCoreEmojiType *relieved __attribute__((swift_name("relieved")));
@property (class, readonly) PlanetlinkCoreEmojiType *hearteyes __attribute__((swift_name("hearteyes")));
@property (class, readonly) PlanetlinkCoreEmojiType *sunglasses __attribute__((swift_name("sunglasses")));
@property (class, readonly) PlanetlinkCoreEmojiType *smirk __attribute__((swift_name("smirk")));
@property (class, readonly) PlanetlinkCoreEmojiType *neutralface __attribute__((swift_name("neutralface")));
@property (class, readonly) PlanetlinkCoreEmojiType *expressionless __attribute__((swift_name("expressionless")));
@property (class, readonly) PlanetlinkCoreEmojiType *unamused __attribute__((swift_name("unamused")));
@property (class, readonly) PlanetlinkCoreEmojiType *sweat __attribute__((swift_name("sweat")));
@property (class, readonly) PlanetlinkCoreEmojiType *pensive __attribute__((swift_name("pensive")));
@property (class, readonly) PlanetlinkCoreEmojiType *confused __attribute__((swift_name("confused")));
@property (class, readonly) PlanetlinkCoreEmojiType *confounded __attribute__((swift_name("confounded")));
@property (class, readonly) PlanetlinkCoreEmojiType *kissing __attribute__((swift_name("kissing")));
@property (class, readonly) PlanetlinkCoreEmojiType *kissingheart __attribute__((swift_name("kissingheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *kissingsmilingeyes __attribute__((swift_name("kissingsmilingeyes")));
@property (class, readonly) PlanetlinkCoreEmojiType *kissingclosedeyes __attribute__((swift_name("kissingclosedeyes")));
@property (class, readonly) PlanetlinkCoreEmojiType *stuckouttongue __attribute__((swift_name("stuckouttongue")));
@property (class, readonly) PlanetlinkCoreEmojiType *stuckouttonguewinkingeye __attribute__((swift_name("stuckouttonguewinkingeye")));
@property (class, readonly) PlanetlinkCoreEmojiType *stuckouttongueclosedeyes __attribute__((swift_name("stuckouttongueclosedeyes")));
@property (class, readonly) PlanetlinkCoreEmojiType *disappointed __attribute__((swift_name("disappointed")));
@property (class, readonly) PlanetlinkCoreEmojiType *worried __attribute__((swift_name("worried")));
@property (class, readonly) PlanetlinkCoreEmojiType *angry __attribute__((swift_name("angry")));
@property (class, readonly) PlanetlinkCoreEmojiType *rage __attribute__((swift_name("rage")));
@property (class, readonly) PlanetlinkCoreEmojiType *cry __attribute__((swift_name("cry")));
@property (class, readonly) PlanetlinkCoreEmojiType *persevere __attribute__((swift_name("persevere")));
@property (class, readonly) PlanetlinkCoreEmojiType *triumph __attribute__((swift_name("triumph")));
@property (class, readonly) PlanetlinkCoreEmojiType *disappointedrelieved __attribute__((swift_name("disappointedrelieved")));
@property (class, readonly) PlanetlinkCoreEmojiType *frowning __attribute__((swift_name("frowning")));
@property (class, readonly) PlanetlinkCoreEmojiType *anguished __attribute__((swift_name("anguished")));
@property (class, readonly) PlanetlinkCoreEmojiType *fearful __attribute__((swift_name("fearful")));
@property (class, readonly) PlanetlinkCoreEmojiType *weary __attribute__((swift_name("weary")));
@property (class, readonly) PlanetlinkCoreEmojiType *sleepy __attribute__((swift_name("sleepy")));
@property (class, readonly) PlanetlinkCoreEmojiType *tiredface __attribute__((swift_name("tiredface")));
@property (class, readonly) PlanetlinkCoreEmojiType *grimacing __attribute__((swift_name("grimacing")));
@property (class, readonly) PlanetlinkCoreEmojiType *sob __attribute__((swift_name("sob")));
@property (class, readonly) PlanetlinkCoreEmojiType *openmouth __attribute__((swift_name("openmouth")));
@property (class, readonly) PlanetlinkCoreEmojiType *hushed __attribute__((swift_name("hushed")));
@property (class, readonly) PlanetlinkCoreEmojiType *coldsweat __attribute__((swift_name("coldsweat")));
@property (class, readonly) PlanetlinkCoreEmojiType *scream __attribute__((swift_name("scream")));
@property (class, readonly) PlanetlinkCoreEmojiType *astonished __attribute__((swift_name("astonished")));
@property (class, readonly) PlanetlinkCoreEmojiType *flushed __attribute__((swift_name("flushed")));
@property (class, readonly) PlanetlinkCoreEmojiType *sleeping __attribute__((swift_name("sleeping")));
@property (class, readonly) PlanetlinkCoreEmojiType *dizzyface __attribute__((swift_name("dizzyface")));
@property (class, readonly) PlanetlinkCoreEmojiType *nomouth __attribute__((swift_name("nomouth")));
@property (class, readonly) PlanetlinkCoreEmojiType *mask __attribute__((swift_name("mask")));
@property (class, readonly) PlanetlinkCoreEmojiType *smilecat __attribute__((swift_name("smilecat")));
@property (class, readonly) PlanetlinkCoreEmojiType *joycat __attribute__((swift_name("joycat")));
@property (class, readonly) PlanetlinkCoreEmojiType *smileycat __attribute__((swift_name("smileycat")));
@property (class, readonly) PlanetlinkCoreEmojiType *hearteyescat __attribute__((swift_name("hearteyescat")));
@property (class, readonly) PlanetlinkCoreEmojiType *smirkcat __attribute__((swift_name("smirkcat")));
@property (class, readonly) PlanetlinkCoreEmojiType *kissingcat __attribute__((swift_name("kissingcat")));
@property (class, readonly) PlanetlinkCoreEmojiType *poutingcat __attribute__((swift_name("poutingcat")));
@property (class, readonly) PlanetlinkCoreEmojiType *cryingcatface __attribute__((swift_name("cryingcatface")));
@property (class, readonly) PlanetlinkCoreEmojiType *screamcat __attribute__((swift_name("screamcat")));
@property (class, readonly) PlanetlinkCoreEmojiType *slightlyfrowningface __attribute__((swift_name("slightlyfrowningface")));
@property (class, readonly) PlanetlinkCoreEmojiType *slightlysmilingface __attribute__((swift_name("slightlysmilingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *upsidedownface __attribute__((swift_name("upsidedownface")));
@property (class, readonly) PlanetlinkCoreEmojiType *facewithrollingeyes __attribute__((swift_name("facewithrollingeyes")));
@property (class, readonly) PlanetlinkCoreEmojiType *womangesturingno __attribute__((swift_name("womangesturingno")));
@property (class, readonly) PlanetlinkCoreEmojiType *mangesturingno __attribute__((swift_name("mangesturingno")));
@property (class, readonly) PlanetlinkCoreEmojiType *nogood __attribute__((swift_name("nogood")));
@property (class, readonly) PlanetlinkCoreEmojiType *womangesturingok __attribute__((swift_name("womangesturingok")));
@property (class, readonly) PlanetlinkCoreEmojiType *mangesturingok __attribute__((swift_name("mangesturingok")));
@property (class, readonly) PlanetlinkCoreEmojiType *okwoman __attribute__((swift_name("okwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanbowing __attribute__((swift_name("womanbowing")));
@property (class, readonly) PlanetlinkCoreEmojiType *manbowing __attribute__((swift_name("manbowing")));
@property (class, readonly) PlanetlinkCoreEmojiType *bow __attribute__((swift_name("bow")));
@property (class, readonly) PlanetlinkCoreEmojiType *seenoevil __attribute__((swift_name("seenoevil")));
@property (class, readonly) PlanetlinkCoreEmojiType *hearnoevil __attribute__((swift_name("hearnoevil")));
@property (class, readonly) PlanetlinkCoreEmojiType *speaknoevil __attribute__((swift_name("speaknoevil")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanraisinghand __attribute__((swift_name("womanraisinghand")));
@property (class, readonly) PlanetlinkCoreEmojiType *manraisinghand __attribute__((swift_name("manraisinghand")));
@property (class, readonly) PlanetlinkCoreEmojiType *raisinghand __attribute__((swift_name("raisinghand")));
@property (class, readonly) PlanetlinkCoreEmojiType *raisedhands __attribute__((swift_name("raisedhands")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanfrowning __attribute__((swift_name("womanfrowning")));
@property (class, readonly) PlanetlinkCoreEmojiType *manfrowning __attribute__((swift_name("manfrowning")));
@property (class, readonly) PlanetlinkCoreEmojiType *personfrowning __attribute__((swift_name("personfrowning")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanpouting __attribute__((swift_name("womanpouting")));
@property (class, readonly) PlanetlinkCoreEmojiType *manpouting __attribute__((swift_name("manpouting")));
@property (class, readonly) PlanetlinkCoreEmojiType *personwithpoutingface __attribute__((swift_name("personwithpoutingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *pray __attribute__((swift_name("pray")));
@property (class, readonly) PlanetlinkCoreEmojiType *rocket __attribute__((swift_name("rocket")));
@property (class, readonly) PlanetlinkCoreEmojiType *helicopter __attribute__((swift_name("helicopter")));
@property (class, readonly) PlanetlinkCoreEmojiType *steamlocomotive __attribute__((swift_name("steamlocomotive")));
@property (class, readonly) PlanetlinkCoreEmojiType *railwaycar __attribute__((swift_name("railwaycar")));
@property (class, readonly) PlanetlinkCoreEmojiType *bullettrainside __attribute__((swift_name("bullettrainside")));
@property (class, readonly) PlanetlinkCoreEmojiType *bullettrainfront __attribute__((swift_name("bullettrainfront")));
@property (class, readonly) PlanetlinkCoreEmojiType *train2 __attribute__((swift_name("train2")));
@property (class, readonly) PlanetlinkCoreEmojiType *metro __attribute__((swift_name("metro")));
@property (class, readonly) PlanetlinkCoreEmojiType *lightrail __attribute__((swift_name("lightrail")));
@property (class, readonly) PlanetlinkCoreEmojiType *station __attribute__((swift_name("station")));
@property (class, readonly) PlanetlinkCoreEmojiType *tram __attribute__((swift_name("tram")));
@property (class, readonly) PlanetlinkCoreEmojiType *train __attribute__((swift_name("train")));
@property (class, readonly) PlanetlinkCoreEmojiType *bus __attribute__((swift_name("bus")));
@property (class, readonly) PlanetlinkCoreEmojiType *oncomingbus __attribute__((swift_name("oncomingbus")));
@property (class, readonly) PlanetlinkCoreEmojiType *trolleybus __attribute__((swift_name("trolleybus")));
@property (class, readonly) PlanetlinkCoreEmojiType *busstop __attribute__((swift_name("busstop")));
@property (class, readonly) PlanetlinkCoreEmojiType *minibus __attribute__((swift_name("minibus")));
@property (class, readonly) PlanetlinkCoreEmojiType *ambulance __attribute__((swift_name("ambulance")));
@property (class, readonly) PlanetlinkCoreEmojiType *fireengine __attribute__((swift_name("fireengine")));
@property (class, readonly) PlanetlinkCoreEmojiType *policecar __attribute__((swift_name("policecar")));
@property (class, readonly) PlanetlinkCoreEmojiType *oncomingpolicecar __attribute__((swift_name("oncomingpolicecar")));
@property (class, readonly) PlanetlinkCoreEmojiType *taxi __attribute__((swift_name("taxi")));
@property (class, readonly) PlanetlinkCoreEmojiType *oncomingtaxi __attribute__((swift_name("oncomingtaxi")));
@property (class, readonly) PlanetlinkCoreEmojiType *car __attribute__((swift_name("car")));
@property (class, readonly) PlanetlinkCoreEmojiType *oncomingautomobile __attribute__((swift_name("oncomingautomobile")));
@property (class, readonly) PlanetlinkCoreEmojiType *bluecar __attribute__((swift_name("bluecar")));
@property (class, readonly) PlanetlinkCoreEmojiType *truck __attribute__((swift_name("truck")));
@property (class, readonly) PlanetlinkCoreEmojiType *articulatedlorry __attribute__((swift_name("articulatedlorry")));
@property (class, readonly) PlanetlinkCoreEmojiType *tractor __attribute__((swift_name("tractor")));
@property (class, readonly) PlanetlinkCoreEmojiType *monorail __attribute__((swift_name("monorail")));
@property (class, readonly) PlanetlinkCoreEmojiType *mountainrailway __attribute__((swift_name("mountainrailway")));
@property (class, readonly) PlanetlinkCoreEmojiType *suspensionrailway __attribute__((swift_name("suspensionrailway")));
@property (class, readonly) PlanetlinkCoreEmojiType *mountaincableway __attribute__((swift_name("mountaincableway")));
@property (class, readonly) PlanetlinkCoreEmojiType *aerialtramway __attribute__((swift_name("aerialtramway")));
@property (class, readonly) PlanetlinkCoreEmojiType *ship __attribute__((swift_name("ship")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanrowingboat __attribute__((swift_name("womanrowingboat")));
@property (class, readonly) PlanetlinkCoreEmojiType *manrowingboat __attribute__((swift_name("manrowingboat")));
@property (class, readonly) PlanetlinkCoreEmojiType *rowboat __attribute__((swift_name("rowboat")));
@property (class, readonly) PlanetlinkCoreEmojiType *speedboat __attribute__((swift_name("speedboat")));
@property (class, readonly) PlanetlinkCoreEmojiType *trafficlight __attribute__((swift_name("trafficlight")));
@property (class, readonly) PlanetlinkCoreEmojiType *verticaltrafficlight __attribute__((swift_name("verticaltrafficlight")));
@property (class, readonly) PlanetlinkCoreEmojiType *construction __attribute__((swift_name("construction")));
@property (class, readonly) PlanetlinkCoreEmojiType *rotatinglight __attribute__((swift_name("rotatinglight")));
@property (class, readonly) PlanetlinkCoreEmojiType *triangularflagonpost __attribute__((swift_name("triangularflagonpost")));
@property (class, readonly) PlanetlinkCoreEmojiType *door __attribute__((swift_name("door")));
@property (class, readonly) PlanetlinkCoreEmojiType *noentrysign __attribute__((swift_name("noentrysign")));
@property (class, readonly) PlanetlinkCoreEmojiType *smoking __attribute__((swift_name("smoking")));
@property (class, readonly) PlanetlinkCoreEmojiType *nosmoking __attribute__((swift_name("nosmoking")));
@property (class, readonly) PlanetlinkCoreEmojiType *putlitterinitsplace __attribute__((swift_name("putlitterinitsplace")));
@property (class, readonly) PlanetlinkCoreEmojiType *donotlitter __attribute__((swift_name("donotlitter")));
@property (class, readonly) PlanetlinkCoreEmojiType *potablewater __attribute__((swift_name("potablewater")));
@property (class, readonly) PlanetlinkCoreEmojiType *nonpotablewater __attribute__((swift_name("nonpotablewater")));
@property (class, readonly) PlanetlinkCoreEmojiType *bike __attribute__((swift_name("bike")));
@property (class, readonly) PlanetlinkCoreEmojiType *nobicycles __attribute__((swift_name("nobicycles")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanbiking __attribute__((swift_name("womanbiking")));
@property (class, readonly) PlanetlinkCoreEmojiType *manbiking __attribute__((swift_name("manbiking")));
@property (class, readonly) PlanetlinkCoreEmojiType *bicyclist __attribute__((swift_name("bicyclist")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanmountainbiking __attribute__((swift_name("womanmountainbiking")));
@property (class, readonly) PlanetlinkCoreEmojiType *manmountainbiking __attribute__((swift_name("manmountainbiking")));
@property (class, readonly) PlanetlinkCoreEmojiType *mountainbicyclist __attribute__((swift_name("mountainbicyclist")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwalking __attribute__((swift_name("womanwalking")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwalking __attribute__((swift_name("manwalking")));
@property (class, readonly) PlanetlinkCoreEmojiType *walking __attribute__((swift_name("walking")));
@property (class, readonly) PlanetlinkCoreEmojiType *nopedestrians __attribute__((swift_name("nopedestrians")));
@property (class, readonly) PlanetlinkCoreEmojiType *childrencrossing __attribute__((swift_name("childrencrossing")));
@property (class, readonly) PlanetlinkCoreEmojiType *mens __attribute__((swift_name("mens")));
@property (class, readonly) PlanetlinkCoreEmojiType *womens __attribute__((swift_name("womens")));
@property (class, readonly) PlanetlinkCoreEmojiType *restroom __attribute__((swift_name("restroom")));
@property (class, readonly) PlanetlinkCoreEmojiType *babysymbol __attribute__((swift_name("babysymbol")));
@property (class, readonly) PlanetlinkCoreEmojiType *toilet __attribute__((swift_name("toilet")));
@property (class, readonly) PlanetlinkCoreEmojiType *wc __attribute__((swift_name("wc")));
@property (class, readonly) PlanetlinkCoreEmojiType *shower __attribute__((swift_name("shower")));
@property (class, readonly) PlanetlinkCoreEmojiType *bath __attribute__((swift_name("bath")));
@property (class, readonly) PlanetlinkCoreEmojiType *bathtub __attribute__((swift_name("bathtub")));
@property (class, readonly) PlanetlinkCoreEmojiType *passportcontrol __attribute__((swift_name("passportcontrol")));
@property (class, readonly) PlanetlinkCoreEmojiType *customs __attribute__((swift_name("customs")));
@property (class, readonly) PlanetlinkCoreEmojiType *baggageclaim __attribute__((swift_name("baggageclaim")));
@property (class, readonly) PlanetlinkCoreEmojiType *leftluggage __attribute__((swift_name("leftluggage")));
@property (class, readonly) PlanetlinkCoreEmojiType *couchandlamp __attribute__((swift_name("couchandlamp")));
@property (class, readonly) PlanetlinkCoreEmojiType *sleepingaccommodation __attribute__((swift_name("sleepingaccommodation")));
@property (class, readonly) PlanetlinkCoreEmojiType *shoppingbags __attribute__((swift_name("shoppingbags")));
@property (class, readonly) PlanetlinkCoreEmojiType *bellhopbell __attribute__((swift_name("bellhopbell")));
@property (class, readonly) PlanetlinkCoreEmojiType *bed __attribute__((swift_name("bed")));
@property (class, readonly) PlanetlinkCoreEmojiType *placeofworship __attribute__((swift_name("placeofworship")));
@property (class, readonly) PlanetlinkCoreEmojiType *octagonalsign __attribute__((swift_name("octagonalsign")));
@property (class, readonly) PlanetlinkCoreEmojiType *shoppingtrolley __attribute__((swift_name("shoppingtrolley")));
@property (class, readonly) PlanetlinkCoreEmojiType *hindutemple __attribute__((swift_name("hindutemple")));
@property (class, readonly) PlanetlinkCoreEmojiType *hammerandwrench __attribute__((swift_name("hammerandwrench")));
@property (class, readonly) PlanetlinkCoreEmojiType *shield __attribute__((swift_name("shield")));
@property (class, readonly) PlanetlinkCoreEmojiType *oildrum __attribute__((swift_name("oildrum")));
@property (class, readonly) PlanetlinkCoreEmojiType *motorway __attribute__((swift_name("motorway")));
@property (class, readonly) PlanetlinkCoreEmojiType *railwaytrack __attribute__((swift_name("railwaytrack")));
@property (class, readonly) PlanetlinkCoreEmojiType *motorboat __attribute__((swift_name("motorboat")));
@property (class, readonly) PlanetlinkCoreEmojiType *smallairplane __attribute__((swift_name("smallairplane")));
@property (class, readonly) PlanetlinkCoreEmojiType *airplanedeparture __attribute__((swift_name("airplanedeparture")));
@property (class, readonly) PlanetlinkCoreEmojiType *airplanearriving __attribute__((swift_name("airplanearriving")));
@property (class, readonly) PlanetlinkCoreEmojiType *satellite __attribute__((swift_name("satellite")));
@property (class, readonly) PlanetlinkCoreEmojiType *passengership __attribute__((swift_name("passengership")));
@property (class, readonly) PlanetlinkCoreEmojiType *scooter __attribute__((swift_name("scooter")));
@property (class, readonly) PlanetlinkCoreEmojiType *motorscooter __attribute__((swift_name("motorscooter")));
@property (class, readonly) PlanetlinkCoreEmojiType *canoe __attribute__((swift_name("canoe")));
@property (class, readonly) PlanetlinkCoreEmojiType *sled __attribute__((swift_name("sled")));
@property (class, readonly) PlanetlinkCoreEmojiType *flyingsaucer __attribute__((swift_name("flyingsaucer")));
@property (class, readonly) PlanetlinkCoreEmojiType *skateboard __attribute__((swift_name("skateboard")));
@property (class, readonly) PlanetlinkCoreEmojiType *autorickshaw __attribute__((swift_name("autorickshaw")));
@property (class, readonly) PlanetlinkCoreEmojiType *largeorangecircle __attribute__((swift_name("largeorangecircle")));
@property (class, readonly) PlanetlinkCoreEmojiType *largeyellowcircle __attribute__((swift_name("largeyellowcircle")));
@property (class, readonly) PlanetlinkCoreEmojiType *largegreencircle __attribute__((swift_name("largegreencircle")));
@property (class, readonly) PlanetlinkCoreEmojiType *largepurplecircle __attribute__((swift_name("largepurplecircle")));
@property (class, readonly) PlanetlinkCoreEmojiType *largebrowncircle __attribute__((swift_name("largebrowncircle")));
@property (class, readonly) PlanetlinkCoreEmojiType *largeredsquare __attribute__((swift_name("largeredsquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *largebluesquare __attribute__((swift_name("largebluesquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *largeorangesquare __attribute__((swift_name("largeorangesquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *largeyellowsquare __attribute__((swift_name("largeyellowsquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *largegreensquare __attribute__((swift_name("largegreensquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *largepurplesquare __attribute__((swift_name("largepurplesquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *largebrownsquare __attribute__((swift_name("largebrownsquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *whiteheart __attribute__((swift_name("whiteheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *brownheart __attribute__((swift_name("brownheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *pinchinghand __attribute__((swift_name("pinchinghand")));
@property (class, readonly) PlanetlinkCoreEmojiType *zippermouthface __attribute__((swift_name("zippermouthface")));
@property (class, readonly) PlanetlinkCoreEmojiType *moneymouthface __attribute__((swift_name("moneymouthface")));
@property (class, readonly) PlanetlinkCoreEmojiType *facewiththermometer __attribute__((swift_name("facewiththermometer")));
@property (class, readonly) PlanetlinkCoreEmojiType *nerdface __attribute__((swift_name("nerdface")));
@property (class, readonly) PlanetlinkCoreEmojiType *thinkingface __attribute__((swift_name("thinkingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *facewithheadbandage __attribute__((swift_name("facewithheadbandage")));
@property (class, readonly) PlanetlinkCoreEmojiType *robotface __attribute__((swift_name("robotface")));
@property (class, readonly) PlanetlinkCoreEmojiType *huggingface __attribute__((swift_name("huggingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *thehorns __attribute__((swift_name("thehorns")));
@property (class, readonly) PlanetlinkCoreEmojiType *callmehand __attribute__((swift_name("callmehand")));
@property (class, readonly) PlanetlinkCoreEmojiType *raisedbackofhand __attribute__((swift_name("raisedbackofhand")));
@property (class, readonly) PlanetlinkCoreEmojiType *leftfacingfist __attribute__((swift_name("leftfacingfist")));
@property (class, readonly) PlanetlinkCoreEmojiType *rightfacingfist __attribute__((swift_name("rightfacingfist")));
@property (class, readonly) PlanetlinkCoreEmojiType *handshake __attribute__((swift_name("handshake")));
@property (class, readonly) PlanetlinkCoreEmojiType *crossedfingers __attribute__((swift_name("crossedfingers")));
@property (class, readonly) PlanetlinkCoreEmojiType *iloveyouhandsign __attribute__((swift_name("iloveyouhandsign")));
@property (class, readonly) PlanetlinkCoreEmojiType *facewithcowboyhat __attribute__((swift_name("facewithcowboyhat")));
@property (class, readonly) PlanetlinkCoreEmojiType *clownface __attribute__((swift_name("clownface")));
@property (class, readonly) PlanetlinkCoreEmojiType *nauseatedface __attribute__((swift_name("nauseatedface")));
@property (class, readonly) PlanetlinkCoreEmojiType *rollingonthefloorlaughing __attribute__((swift_name("rollingonthefloorlaughing")));
@property (class, readonly) PlanetlinkCoreEmojiType *droolingface __attribute__((swift_name("droolingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *lyingface __attribute__((swift_name("lyingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanfacepalming __attribute__((swift_name("womanfacepalming")));
@property (class, readonly) PlanetlinkCoreEmojiType *manfacepalming __attribute__((swift_name("manfacepalming")));
@property (class, readonly) PlanetlinkCoreEmojiType *facepalm __attribute__((swift_name("facepalm")));
@property (class, readonly) PlanetlinkCoreEmojiType *sneezingface __attribute__((swift_name("sneezingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *facewithraisedeyebrow __attribute__((swift_name("facewithraisedeyebrow")));
@property (class, readonly) PlanetlinkCoreEmojiType *starstruck __attribute__((swift_name("starstruck")));
@property (class, readonly) PlanetlinkCoreEmojiType *zanyface __attribute__((swift_name("zanyface")));
@property (class, readonly) PlanetlinkCoreEmojiType *shushingface __attribute__((swift_name("shushingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *facewithsymbolsonmouth __attribute__((swift_name("facewithsymbolsonmouth")));
@property (class, readonly) PlanetlinkCoreEmojiType *facewithhandovermouth __attribute__((swift_name("facewithhandovermouth")));
@property (class, readonly) PlanetlinkCoreEmojiType *facevomiting __attribute__((swift_name("facevomiting")));
@property (class, readonly) PlanetlinkCoreEmojiType *explodinghead __attribute__((swift_name("explodinghead")));
@property (class, readonly) PlanetlinkCoreEmojiType *pregnantwoman __attribute__((swift_name("pregnantwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *breastfeeding __attribute__((swift_name("breastfeeding")));
@property (class, readonly) PlanetlinkCoreEmojiType *palmsuptogether __attribute__((swift_name("palmsuptogether")));
@property (class, readonly) PlanetlinkCoreEmojiType *selfie __attribute__((swift_name("selfie")));
@property (class, readonly) PlanetlinkCoreEmojiType *prince __attribute__((swift_name("prince")));
@property (class, readonly) PlanetlinkCoreEmojiType *manintuxedo __attribute__((swift_name("manintuxedo")));
@property (class, readonly) PlanetlinkCoreEmojiType *mrsclaus __attribute__((swift_name("mrsclaus")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanshrugging __attribute__((swift_name("womanshrugging")));
@property (class, readonly) PlanetlinkCoreEmojiType *manshrugging __attribute__((swift_name("manshrugging")));
@property (class, readonly) PlanetlinkCoreEmojiType *shrug __attribute__((swift_name("shrug")));
@property (class, readonly) PlanetlinkCoreEmojiType *womancartwheeling __attribute__((swift_name("womancartwheeling")));
@property (class, readonly) PlanetlinkCoreEmojiType *mancartwheeling __attribute__((swift_name("mancartwheeling")));
@property (class, readonly) PlanetlinkCoreEmojiType *persondoingcartwheel __attribute__((swift_name("persondoingcartwheel")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanjuggling __attribute__((swift_name("womanjuggling")));
@property (class, readonly) PlanetlinkCoreEmojiType *manjuggling __attribute__((swift_name("manjuggling")));
@property (class, readonly) PlanetlinkCoreEmojiType *juggling __attribute__((swift_name("juggling")));
@property (class, readonly) PlanetlinkCoreEmojiType *fencer __attribute__((swift_name("fencer")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanwrestling __attribute__((swift_name("womanwrestling")));
@property (class, readonly) PlanetlinkCoreEmojiType *manwrestling __attribute__((swift_name("manwrestling")));
@property (class, readonly) PlanetlinkCoreEmojiType *wrestlers __attribute__((swift_name("wrestlers")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanplayingwaterpolo __attribute__((swift_name("womanplayingwaterpolo")));
@property (class, readonly) PlanetlinkCoreEmojiType *manplayingwaterpolo __attribute__((swift_name("manplayingwaterpolo")));
@property (class, readonly) PlanetlinkCoreEmojiType *waterpolo __attribute__((swift_name("waterpolo")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanplayinghandball __attribute__((swift_name("womanplayinghandball")));
@property (class, readonly) PlanetlinkCoreEmojiType *manplayinghandball __attribute__((swift_name("manplayinghandball")));
@property (class, readonly) PlanetlinkCoreEmojiType *handball __attribute__((swift_name("handball")));
@property (class, readonly) PlanetlinkCoreEmojiType *divingmask __attribute__((swift_name("divingmask")));
@property (class, readonly) PlanetlinkCoreEmojiType *wiltedflower __attribute__((swift_name("wiltedflower")));
@property (class, readonly) PlanetlinkCoreEmojiType *drumwithdrumsticks __attribute__((swift_name("drumwithdrumsticks")));
@property (class, readonly) PlanetlinkCoreEmojiType *clinkingglasses __attribute__((swift_name("clinkingglasses")));
@property (class, readonly) PlanetlinkCoreEmojiType *tumblerglass __attribute__((swift_name("tumblerglass")));
@property (class, readonly) PlanetlinkCoreEmojiType *spoon __attribute__((swift_name("spoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *goalnet __attribute__((swift_name("goalnet")));
@property (class, readonly) PlanetlinkCoreEmojiType *firstplacemedal __attribute__((swift_name("firstplacemedal")));
@property (class, readonly) PlanetlinkCoreEmojiType *secondplacemedal __attribute__((swift_name("secondplacemedal")));
@property (class, readonly) PlanetlinkCoreEmojiType *thirdplacemedal __attribute__((swift_name("thirdplacemedal")));
@property (class, readonly) PlanetlinkCoreEmojiType *boxingglove __attribute__((swift_name("boxingglove")));
@property (class, readonly) PlanetlinkCoreEmojiType *martialartsuniform __attribute__((swift_name("martialartsuniform")));
@property (class, readonly) PlanetlinkCoreEmojiType *curlingstone __attribute__((swift_name("curlingstone")));
@property (class, readonly) PlanetlinkCoreEmojiType *lacrosse __attribute__((swift_name("lacrosse")));
@property (class, readonly) PlanetlinkCoreEmojiType *softball __attribute__((swift_name("softball")));
@property (class, readonly) PlanetlinkCoreEmojiType *flyingdisc __attribute__((swift_name("flyingdisc")));
@property (class, readonly) PlanetlinkCoreEmojiType *croissant __attribute__((swift_name("croissant")));
@property (class, readonly) PlanetlinkCoreEmojiType *avocado __attribute__((swift_name("avocado")));
@property (class, readonly) PlanetlinkCoreEmojiType *cucumber __attribute__((swift_name("cucumber")));
@property (class, readonly) PlanetlinkCoreEmojiType *bacon __attribute__((swift_name("bacon")));
@property (class, readonly) PlanetlinkCoreEmojiType *potato __attribute__((swift_name("potato")));
@property (class, readonly) PlanetlinkCoreEmojiType *carrot __attribute__((swift_name("carrot")));
@property (class, readonly) PlanetlinkCoreEmojiType *baguettebread __attribute__((swift_name("baguettebread")));
@property (class, readonly) PlanetlinkCoreEmojiType *greensalad __attribute__((swift_name("greensalad")));
@property (class, readonly) PlanetlinkCoreEmojiType *shallowpanoffood __attribute__((swift_name("shallowpanoffood")));
@property (class, readonly) PlanetlinkCoreEmojiType *stuffedflatbread __attribute__((swift_name("stuffedflatbread")));
@property (class, readonly) PlanetlinkCoreEmojiType *egg __attribute__((swift_name("egg")));
@property (class, readonly) PlanetlinkCoreEmojiType *glassofmilk __attribute__((swift_name("glassofmilk")));
@property (class, readonly) PlanetlinkCoreEmojiType *peanuts __attribute__((swift_name("peanuts")));
@property (class, readonly) PlanetlinkCoreEmojiType *kiwifruit __attribute__((swift_name("kiwifruit")));
@property (class, readonly) PlanetlinkCoreEmojiType *pancakes __attribute__((swift_name("pancakes")));
@property (class, readonly) PlanetlinkCoreEmojiType *dumpling __attribute__((swift_name("dumpling")));
@property (class, readonly) PlanetlinkCoreEmojiType *fortunecookie __attribute__((swift_name("fortunecookie")));
@property (class, readonly) PlanetlinkCoreEmojiType *takeoutbox __attribute__((swift_name("takeoutbox")));
@property (class, readonly) PlanetlinkCoreEmojiType *chopsticks __attribute__((swift_name("chopsticks")));
@property (class, readonly) PlanetlinkCoreEmojiType *bowlwithspoon __attribute__((swift_name("bowlwithspoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *cupwithstraw __attribute__((swift_name("cupwithstraw")));
@property (class, readonly) PlanetlinkCoreEmojiType *coconut __attribute__((swift_name("coconut")));
@property (class, readonly) PlanetlinkCoreEmojiType *broccoli __attribute__((swift_name("broccoli")));
@property (class, readonly) PlanetlinkCoreEmojiType *pie __attribute__((swift_name("pie")));
@property (class, readonly) PlanetlinkCoreEmojiType *pretzel __attribute__((swift_name("pretzel")));
@property (class, readonly) PlanetlinkCoreEmojiType *cutofmeat __attribute__((swift_name("cutofmeat")));
@property (class, readonly) PlanetlinkCoreEmojiType *sandwich __attribute__((swift_name("sandwich")));
@property (class, readonly) PlanetlinkCoreEmojiType *cannedfood __attribute__((swift_name("cannedfood")));
@property (class, readonly) PlanetlinkCoreEmojiType *leafygreen __attribute__((swift_name("leafygreen")));
@property (class, readonly) PlanetlinkCoreEmojiType *mango __attribute__((swift_name("mango")));
@property (class, readonly) PlanetlinkCoreEmojiType *mooncake __attribute__((swift_name("mooncake")));
@property (class, readonly) PlanetlinkCoreEmojiType *bagel __attribute__((swift_name("bagel")));
@property (class, readonly) PlanetlinkCoreEmojiType *smilingfacewith3hearts __attribute__((swift_name("smilingfacewith3hearts")));
@property (class, readonly) PlanetlinkCoreEmojiType *yawningface __attribute__((swift_name("yawningface")));
@property (class, readonly) PlanetlinkCoreEmojiType *partyingface __attribute__((swift_name("partyingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *woozyface __attribute__((swift_name("woozyface")));
@property (class, readonly) PlanetlinkCoreEmojiType *hotface __attribute__((swift_name("hotface")));
@property (class, readonly) PlanetlinkCoreEmojiType *coldface __attribute__((swift_name("coldface")));
@property (class, readonly) PlanetlinkCoreEmojiType *pleadingface __attribute__((swift_name("pleadingface")));
@property (class, readonly) PlanetlinkCoreEmojiType *sari __attribute__((swift_name("sari")));
@property (class, readonly) PlanetlinkCoreEmojiType *labcoat __attribute__((swift_name("labcoat")));
@property (class, readonly) PlanetlinkCoreEmojiType *goggles __attribute__((swift_name("goggles")));
@property (class, readonly) PlanetlinkCoreEmojiType *hikingboot __attribute__((swift_name("hikingboot")));
@property (class, readonly) PlanetlinkCoreEmojiType *womansflatshoe __attribute__((swift_name("womansflatshoe")));
@property (class, readonly) PlanetlinkCoreEmojiType *crab __attribute__((swift_name("crab")));
@property (class, readonly) PlanetlinkCoreEmojiType *lionface __attribute__((swift_name("lionface")));
@property (class, readonly) PlanetlinkCoreEmojiType *scorpion __attribute__((swift_name("scorpion")));
@property (class, readonly) PlanetlinkCoreEmojiType *turkey __attribute__((swift_name("turkey")));
@property (class, readonly) PlanetlinkCoreEmojiType *unicornface __attribute__((swift_name("unicornface")));
@property (class, readonly) PlanetlinkCoreEmojiType *eagle __attribute__((swift_name("eagle")));
@property (class, readonly) PlanetlinkCoreEmojiType *duck __attribute__((swift_name("duck")));
@property (class, readonly) PlanetlinkCoreEmojiType *bat __attribute__((swift_name("bat")));
@property (class, readonly) PlanetlinkCoreEmojiType *shark __attribute__((swift_name("shark")));
@property (class, readonly) PlanetlinkCoreEmojiType *owl __attribute__((swift_name("owl")));
@property (class, readonly) PlanetlinkCoreEmojiType *foxface __attribute__((swift_name("foxface")));
@property (class, readonly) PlanetlinkCoreEmojiType *butterfly __attribute__((swift_name("butterfly")));
@property (class, readonly) PlanetlinkCoreEmojiType *deer __attribute__((swift_name("deer")));
@property (class, readonly) PlanetlinkCoreEmojiType *gorilla __attribute__((swift_name("gorilla")));
@property (class, readonly) PlanetlinkCoreEmojiType *lizard __attribute__((swift_name("lizard")));
@property (class, readonly) PlanetlinkCoreEmojiType *rhinoceros __attribute__((swift_name("rhinoceros")));
@property (class, readonly) PlanetlinkCoreEmojiType *shrimp __attribute__((swift_name("shrimp")));
@property (class, readonly) PlanetlinkCoreEmojiType *squid __attribute__((swift_name("squid")));
@property (class, readonly) PlanetlinkCoreEmojiType *giraffeface __attribute__((swift_name("giraffeface")));
@property (class, readonly) PlanetlinkCoreEmojiType *zebraface __attribute__((swift_name("zebraface")));
@property (class, readonly) PlanetlinkCoreEmojiType *hedgehog __attribute__((swift_name("hedgehog")));
@property (class, readonly) PlanetlinkCoreEmojiType *sauropod __attribute__((swift_name("sauropod")));
@property (class, readonly) PlanetlinkCoreEmojiType *trex __attribute__((swift_name("trex")));
@property (class, readonly) PlanetlinkCoreEmojiType *cricket __attribute__((swift_name("cricket")));
@property (class, readonly) PlanetlinkCoreEmojiType *kangaroo __attribute__((swift_name("kangaroo")));
@property (class, readonly) PlanetlinkCoreEmojiType *llama __attribute__((swift_name("llama")));
@property (class, readonly) PlanetlinkCoreEmojiType *peacock __attribute__((swift_name("peacock")));
@property (class, readonly) PlanetlinkCoreEmojiType *hippopotamus __attribute__((swift_name("hippopotamus")));
@property (class, readonly) PlanetlinkCoreEmojiType *parrot __attribute__((swift_name("parrot")));
@property (class, readonly) PlanetlinkCoreEmojiType *raccoon __attribute__((swift_name("raccoon")));
@property (class, readonly) PlanetlinkCoreEmojiType *lobster __attribute__((swift_name("lobster")));
@property (class, readonly) PlanetlinkCoreEmojiType *mosquito __attribute__((swift_name("mosquito")));
@property (class, readonly) PlanetlinkCoreEmojiType *microbe __attribute__((swift_name("microbe")));
@property (class, readonly) PlanetlinkCoreEmojiType *badger __attribute__((swift_name("badger")));
@property (class, readonly) PlanetlinkCoreEmojiType *swan __attribute__((swift_name("swan")));
@property (class, readonly) PlanetlinkCoreEmojiType *sloth __attribute__((swift_name("sloth")));
@property (class, readonly) PlanetlinkCoreEmojiType *otter __attribute__((swift_name("otter")));
@property (class, readonly) PlanetlinkCoreEmojiType *orangutan __attribute__((swift_name("orangutan")));
@property (class, readonly) PlanetlinkCoreEmojiType *skunk __attribute__((swift_name("skunk")));
@property (class, readonly) PlanetlinkCoreEmojiType *flamingo __attribute__((swift_name("flamingo")));
@property (class, readonly) PlanetlinkCoreEmojiType *oyster __attribute__((swift_name("oyster")));
@property (class, readonly) PlanetlinkCoreEmojiType *guidedog __attribute__((swift_name("guidedog")));
@property (class, readonly) PlanetlinkCoreEmojiType *probingcane __attribute__((swift_name("probingcane")));
@property (class, readonly) PlanetlinkCoreEmojiType *bone __attribute__((swift_name("bone")));
@property (class, readonly) PlanetlinkCoreEmojiType *leg __attribute__((swift_name("leg")));
@property (class, readonly) PlanetlinkCoreEmojiType *foot __attribute__((swift_name("foot")));
@property (class, readonly) PlanetlinkCoreEmojiType *tooth __attribute__((swift_name("tooth")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalesuperhero __attribute__((swift_name("femalesuperhero")));
@property (class, readonly) PlanetlinkCoreEmojiType *malesuperhero __attribute__((swift_name("malesuperhero")));
@property (class, readonly) PlanetlinkCoreEmojiType *superhero __attribute__((swift_name("superhero")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalesupervillain __attribute__((swift_name("femalesupervillain")));
@property (class, readonly) PlanetlinkCoreEmojiType *malesupervillain __attribute__((swift_name("malesupervillain")));
@property (class, readonly) PlanetlinkCoreEmojiType *supervillain __attribute__((swift_name("supervillain")));
@property (class, readonly) PlanetlinkCoreEmojiType *safetyvest __attribute__((swift_name("safetyvest")));
@property (class, readonly) PlanetlinkCoreEmojiType *earwithhearingaid __attribute__((swift_name("earwithhearingaid")));
@property (class, readonly) PlanetlinkCoreEmojiType *motorizedwheelchair __attribute__((swift_name("motorizedwheelchair")));
@property (class, readonly) PlanetlinkCoreEmojiType *manualwheelchair __attribute__((swift_name("manualwheelchair")));
@property (class, readonly) PlanetlinkCoreEmojiType *mechanicalarm __attribute__((swift_name("mechanicalarm")));
@property (class, readonly) PlanetlinkCoreEmojiType *mechanicalleg __attribute__((swift_name("mechanicalleg")));
@property (class, readonly) PlanetlinkCoreEmojiType *cheesewedge __attribute__((swift_name("cheesewedge")));
@property (class, readonly) PlanetlinkCoreEmojiType *cupcake __attribute__((swift_name("cupcake")));
@property (class, readonly) PlanetlinkCoreEmojiType *salt __attribute__((swift_name("salt")));
@property (class, readonly) PlanetlinkCoreEmojiType *beveragebox __attribute__((swift_name("beveragebox")));
@property (class, readonly) PlanetlinkCoreEmojiType *garlic __attribute__((swift_name("garlic")));
@property (class, readonly) PlanetlinkCoreEmojiType *onion __attribute__((swift_name("onion")));
@property (class, readonly) PlanetlinkCoreEmojiType *falafel __attribute__((swift_name("falafel")));
@property (class, readonly) PlanetlinkCoreEmojiType *waffle __attribute__((swift_name("waffle")));
@property (class, readonly) PlanetlinkCoreEmojiType *butter __attribute__((swift_name("butter")));
@property (class, readonly) PlanetlinkCoreEmojiType *matedrink __attribute__((swift_name("matedrink")));
@property (class, readonly) PlanetlinkCoreEmojiType *icecube __attribute__((swift_name("icecube")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanstanding __attribute__((swift_name("womanstanding")));
@property (class, readonly) PlanetlinkCoreEmojiType *manstanding __attribute__((swift_name("manstanding")));
@property (class, readonly) PlanetlinkCoreEmojiType *standingperson __attribute__((swift_name("standingperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *womankneeling __attribute__((swift_name("womankneeling")));
@property (class, readonly) PlanetlinkCoreEmojiType *mankneeling __attribute__((swift_name("mankneeling")));
@property (class, readonly) PlanetlinkCoreEmojiType *kneelingperson __attribute__((swift_name("kneelingperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *deafwoman __attribute__((swift_name("deafwoman")));
@property (class, readonly) PlanetlinkCoreEmojiType *deafman __attribute__((swift_name("deafman")));
@property (class, readonly) PlanetlinkCoreEmojiType *deafperson __attribute__((swift_name("deafperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *facewithmonocle __attribute__((swift_name("facewithmonocle")));
@property (class, readonly) PlanetlinkCoreEmojiType *farmer __attribute__((swift_name("farmer")));
@property (class, readonly) PlanetlinkCoreEmojiType *cook __attribute__((swift_name("cook")));
@property (class, readonly) PlanetlinkCoreEmojiType *student __attribute__((swift_name("student")));
@property (class, readonly) PlanetlinkCoreEmojiType *singer __attribute__((swift_name("singer")));
@property (class, readonly) PlanetlinkCoreEmojiType *artist __attribute__((swift_name("artist")));
@property (class, readonly) PlanetlinkCoreEmojiType *teacher __attribute__((swift_name("teacher")));
@property (class, readonly) PlanetlinkCoreEmojiType *factoryworker __attribute__((swift_name("factoryworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *technologist __attribute__((swift_name("technologist")));
@property (class, readonly) PlanetlinkCoreEmojiType *officeworker __attribute__((swift_name("officeworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *mechanic __attribute__((swift_name("mechanic")));
@property (class, readonly) PlanetlinkCoreEmojiType *scientist __attribute__((swift_name("scientist")));
@property (class, readonly) PlanetlinkCoreEmojiType *astronaut __attribute__((swift_name("astronaut")));
@property (class, readonly) PlanetlinkCoreEmojiType *firefighter __attribute__((swift_name("firefighter")));
@property (class, readonly) PlanetlinkCoreEmojiType *peopleholdinghands __attribute__((swift_name("peopleholdinghands")));
@property (class, readonly) PlanetlinkCoreEmojiType *personwithprobingcane __attribute__((swift_name("personwithprobingcane")));
@property (class, readonly) PlanetlinkCoreEmojiType *redhairedperson __attribute__((swift_name("redhairedperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *curlyhairedperson __attribute__((swift_name("curlyhairedperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *baldperson __attribute__((swift_name("baldperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitehairedperson __attribute__((swift_name("whitehairedperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *personinmotorizedwheelchair __attribute__((swift_name("personinmotorizedwheelchair")));
@property (class, readonly) PlanetlinkCoreEmojiType *personinmanualwheelchair __attribute__((swift_name("personinmanualwheelchair")));
@property (class, readonly) PlanetlinkCoreEmojiType *healthworker __attribute__((swift_name("healthworker")));
@property (class, readonly) PlanetlinkCoreEmojiType *judge __attribute__((swift_name("judge")));
@property (class, readonly) PlanetlinkCoreEmojiType *pilot __attribute__((swift_name("pilot")));
@property (class, readonly) PlanetlinkCoreEmojiType *adult __attribute__((swift_name("adult")));
@property (class, readonly) PlanetlinkCoreEmojiType *child __attribute__((swift_name("child")));
@property (class, readonly) PlanetlinkCoreEmojiType *olderadult __attribute__((swift_name("olderadult")));
@property (class, readonly) PlanetlinkCoreEmojiType *beardedperson __attribute__((swift_name("beardedperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *personwithheadscarf __attribute__((swift_name("personwithheadscarf")));
@property (class, readonly) PlanetlinkCoreEmojiType *womaninsteamyroom __attribute__((swift_name("womaninsteamyroom")));
@property (class, readonly) PlanetlinkCoreEmojiType *maninsteamyroom __attribute__((swift_name("maninsteamyroom")));
@property (class, readonly) PlanetlinkCoreEmojiType *personinsteamyroom __attribute__((swift_name("personinsteamyroom")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanclimbing __attribute__((swift_name("womanclimbing")));
@property (class, readonly) PlanetlinkCoreEmojiType *manclimbing __attribute__((swift_name("manclimbing")));
@property (class, readonly) PlanetlinkCoreEmojiType *personclimbing __attribute__((swift_name("personclimbing")));
@property (class, readonly) PlanetlinkCoreEmojiType *womaninlotusposition __attribute__((swift_name("womaninlotusposition")));
@property (class, readonly) PlanetlinkCoreEmojiType *maninlotusposition __attribute__((swift_name("maninlotusposition")));
@property (class, readonly) PlanetlinkCoreEmojiType *personinlotusposition __attribute__((swift_name("personinlotusposition")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalemage __attribute__((swift_name("femalemage")));
@property (class, readonly) PlanetlinkCoreEmojiType *malemage __attribute__((swift_name("malemage")));
@property (class, readonly) PlanetlinkCoreEmojiType *mage __attribute__((swift_name("mage")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalefairy __attribute__((swift_name("femalefairy")));
@property (class, readonly) PlanetlinkCoreEmojiType *malefairy __attribute__((swift_name("malefairy")));
@property (class, readonly) PlanetlinkCoreEmojiType *fairy __attribute__((swift_name("fairy")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalevampire __attribute__((swift_name("femalevampire")));
@property (class, readonly) PlanetlinkCoreEmojiType *malevampire __attribute__((swift_name("malevampire")));
@property (class, readonly) PlanetlinkCoreEmojiType *vampire __attribute__((swift_name("vampire")));
@property (class, readonly) PlanetlinkCoreEmojiType *mermaid __attribute__((swift_name("mermaid")));
@property (class, readonly) PlanetlinkCoreEmojiType *merman __attribute__((swift_name("merman")));
@property (class, readonly) PlanetlinkCoreEmojiType *merperson __attribute__((swift_name("merperson")));
@property (class, readonly) PlanetlinkCoreEmojiType *femaleelf __attribute__((swift_name("femaleelf")));
@property (class, readonly) PlanetlinkCoreEmojiType *maleelf __attribute__((swift_name("maleelf")));
@property (class, readonly) PlanetlinkCoreEmojiType *elf __attribute__((swift_name("elf")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalegenie __attribute__((swift_name("femalegenie")));
@property (class, readonly) PlanetlinkCoreEmojiType *malegenie __attribute__((swift_name("malegenie")));
@property (class, readonly) PlanetlinkCoreEmojiType *genie __attribute__((swift_name("genie")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalezombie __attribute__((swift_name("femalezombie")));
@property (class, readonly) PlanetlinkCoreEmojiType *malezombie __attribute__((swift_name("malezombie")));
@property (class, readonly) PlanetlinkCoreEmojiType *zombie __attribute__((swift_name("zombie")));
@property (class, readonly) PlanetlinkCoreEmojiType *brain __attribute__((swift_name("brain")));
@property (class, readonly) PlanetlinkCoreEmojiType *orangeheart __attribute__((swift_name("orangeheart")));
@property (class, readonly) PlanetlinkCoreEmojiType *billedcap __attribute__((swift_name("billedcap")));
@property (class, readonly) PlanetlinkCoreEmojiType *scarf __attribute__((swift_name("scarf")));
@property (class, readonly) PlanetlinkCoreEmojiType *gloves __attribute__((swift_name("gloves")));
@property (class, readonly) PlanetlinkCoreEmojiType *coat __attribute__((swift_name("coat")));
@property (class, readonly) PlanetlinkCoreEmojiType *socks __attribute__((swift_name("socks")));
@property (class, readonly) PlanetlinkCoreEmojiType *redenvelope __attribute__((swift_name("redenvelope")));
@property (class, readonly) PlanetlinkCoreEmojiType *firecracker __attribute__((swift_name("firecracker")));
@property (class, readonly) PlanetlinkCoreEmojiType *jigsaw __attribute__((swift_name("jigsaw")));
@property (class, readonly) PlanetlinkCoreEmojiType *testtube __attribute__((swift_name("testtube")));
@property (class, readonly) PlanetlinkCoreEmojiType *petridish __attribute__((swift_name("petridish")));
@property (class, readonly) PlanetlinkCoreEmojiType *dna __attribute__((swift_name("dna")));
@property (class, readonly) PlanetlinkCoreEmojiType *compass __attribute__((swift_name("compass")));
@property (class, readonly) PlanetlinkCoreEmojiType *abacus __attribute__((swift_name("abacus")));
@property (class, readonly) PlanetlinkCoreEmojiType *fireextinguisher __attribute__((swift_name("fireextinguisher")));
@property (class, readonly) PlanetlinkCoreEmojiType *toolbox __attribute__((swift_name("toolbox")));
@property (class, readonly) PlanetlinkCoreEmojiType *bricks __attribute__((swift_name("bricks")));
@property (class, readonly) PlanetlinkCoreEmojiType *magnet __attribute__((swift_name("magnet")));
@property (class, readonly) PlanetlinkCoreEmojiType *luggage __attribute__((swift_name("luggage")));
@property (class, readonly) PlanetlinkCoreEmojiType *lotionbottle __attribute__((swift_name("lotionbottle")));
@property (class, readonly) PlanetlinkCoreEmojiType *thread __attribute__((swift_name("thread")));
@property (class, readonly) PlanetlinkCoreEmojiType *yarn __attribute__((swift_name("yarn")));
@property (class, readonly) PlanetlinkCoreEmojiType *safetypin __attribute__((swift_name("safetypin")));
@property (class, readonly) PlanetlinkCoreEmojiType *teddybear __attribute__((swift_name("teddybear")));
@property (class, readonly) PlanetlinkCoreEmojiType *broom __attribute__((swift_name("broom")));
@property (class, readonly) PlanetlinkCoreEmojiType *basket __attribute__((swift_name("basket")));
@property (class, readonly) PlanetlinkCoreEmojiType *rollofpaper __attribute__((swift_name("rollofpaper")));
@property (class, readonly) PlanetlinkCoreEmojiType *soap __attribute__((swift_name("soap")));
@property (class, readonly) PlanetlinkCoreEmojiType *sponge __attribute__((swift_name("sponge")));
@property (class, readonly) PlanetlinkCoreEmojiType *receipt __attribute__((swift_name("receipt")));
@property (class, readonly) PlanetlinkCoreEmojiType *nazaramulet __attribute__((swift_name("nazaramulet")));
@property (class, readonly) PlanetlinkCoreEmojiType *balletshoes __attribute__((swift_name("balletshoes")));
@property (class, readonly) PlanetlinkCoreEmojiType *onepieceswimsuit __attribute__((swift_name("onepieceswimsuit")));
@property (class, readonly) PlanetlinkCoreEmojiType *briefs __attribute__((swift_name("briefs")));
@property (class, readonly) PlanetlinkCoreEmojiType *shorts __attribute__((swift_name("shorts")));
@property (class, readonly) PlanetlinkCoreEmojiType *dropofblood __attribute__((swift_name("dropofblood")));
@property (class, readonly) PlanetlinkCoreEmojiType *adhesivebandage __attribute__((swift_name("adhesivebandage")));
@property (class, readonly) PlanetlinkCoreEmojiType *stethoscope __attribute__((swift_name("stethoscope")));
@property (class, readonly) PlanetlinkCoreEmojiType *yoyo __attribute__((swift_name("yoyo")));
@property (class, readonly) PlanetlinkCoreEmojiType *kite __attribute__((swift_name("kite")));
@property (class, readonly) PlanetlinkCoreEmojiType *parachute __attribute__((swift_name("parachute")));
@property (class, readonly) PlanetlinkCoreEmojiType *ringedplanet __attribute__((swift_name("ringedplanet")));
@property (class, readonly) PlanetlinkCoreEmojiType *chair __attribute__((swift_name("chair")));
@property (class, readonly) PlanetlinkCoreEmojiType *razor __attribute__((swift_name("razor")));
@property (class, readonly) PlanetlinkCoreEmojiType *axe __attribute__((swift_name("axe")));
@property (class, readonly) PlanetlinkCoreEmojiType *diyalamp __attribute__((swift_name("diyalamp")));
@property (class, readonly) PlanetlinkCoreEmojiType *banjo __attribute__((swift_name("banjo")));
@property (class, readonly) PlanetlinkCoreEmojiType *bangbang __attribute__((swift_name("bangbang")));
@property (class, readonly) PlanetlinkCoreEmojiType *interrobang __attribute__((swift_name("interrobang")));
@property (class, readonly) PlanetlinkCoreEmojiType *tm __attribute__((swift_name("tm")));
@property (class, readonly) PlanetlinkCoreEmojiType *informationsource __attribute__((swift_name("informationsource")));
@property (class, readonly) PlanetlinkCoreEmojiType *leftrightarrow __attribute__((swift_name("leftrightarrow")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowupdown __attribute__((swift_name("arrowupdown")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowupperleft __attribute__((swift_name("arrowupperleft")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowupperright __attribute__((swift_name("arrowupperright")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowlowerright __attribute__((swift_name("arrowlowerright")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowlowerleft __attribute__((swift_name("arrowlowerleft")));
@property (class, readonly) PlanetlinkCoreEmojiType *leftwardsarrowwithhook __attribute__((swift_name("leftwardsarrowwithhook")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowrighthook __attribute__((swift_name("arrowrighthook")));
@property (class, readonly) PlanetlinkCoreEmojiType *watch __attribute__((swift_name("watch")));
@property (class, readonly) PlanetlinkCoreEmojiType *hourglass __attribute__((swift_name("hourglass")));
@property (class, readonly) PlanetlinkCoreEmojiType *keyboard __attribute__((swift_name("keyboard")));
@property (class, readonly) PlanetlinkCoreEmojiType *eject __attribute__((swift_name("eject")));
@property (class, readonly) PlanetlinkCoreEmojiType *fastforward __attribute__((swift_name("fastforward")));
@property (class, readonly) PlanetlinkCoreEmojiType *rewind __attribute__((swift_name("rewind")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowdoubleup __attribute__((swift_name("arrowdoubleup")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowdoubledown __attribute__((swift_name("arrowdoubledown")));
@property (class, readonly) PlanetlinkCoreEmojiType *blackrightpointingdoubletrianglewithverticalbar __attribute__((swift_name("blackrightpointingdoubletrianglewithverticalbar")));
@property (class, readonly) PlanetlinkCoreEmojiType *blackleftpointingdoubletrianglewithverticalbar __attribute__((swift_name("blackleftpointingdoubletrianglewithverticalbar")));
@property (class, readonly) PlanetlinkCoreEmojiType *blackrightpointingtrianglewithdoubleverticalbar __attribute__((swift_name("blackrightpointingtrianglewithdoubleverticalbar")));
@property (class, readonly) PlanetlinkCoreEmojiType *alarmclock __attribute__((swift_name("alarmclock")));
@property (class, readonly) PlanetlinkCoreEmojiType *stopwatch __attribute__((swift_name("stopwatch")));
@property (class, readonly) PlanetlinkCoreEmojiType *timerclock __attribute__((swift_name("timerclock")));
@property (class, readonly) PlanetlinkCoreEmojiType *hourglassflowingsand __attribute__((swift_name("hourglassflowingsand")));
@property (class, readonly) PlanetlinkCoreEmojiType *doubleverticalbar __attribute__((swift_name("doubleverticalbar")));
@property (class, readonly) PlanetlinkCoreEmojiType *blacksquareforstop __attribute__((swift_name("blacksquareforstop")));
@property (class, readonly) PlanetlinkCoreEmojiType *blackcircleforrecord __attribute__((swift_name("blackcircleforrecord")));
@property (class, readonly) PlanetlinkCoreEmojiType *m __attribute__((swift_name("m")));
@property (class, readonly) PlanetlinkCoreEmojiType *blacksmallsquare __attribute__((swift_name("blacksmallsquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitesmallsquare __attribute__((swift_name("whitesmallsquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowforward __attribute__((swift_name("arrowforward")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowbackward __attribute__((swift_name("arrowbackward")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitemediumsquare __attribute__((swift_name("whitemediumsquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *blackmediumsquare __attribute__((swift_name("blackmediumsquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitemediumsmallsquare __attribute__((swift_name("whitemediumsmallsquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *blackmediumsmallsquare __attribute__((swift_name("blackmediumsmallsquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *sunny __attribute__((swift_name("sunny")));
@property (class, readonly) PlanetlinkCoreEmojiType *cloud __attribute__((swift_name("cloud")));
@property (class, readonly) PlanetlinkCoreEmojiType *umbrella __attribute__((swift_name("umbrella")));
@property (class, readonly) PlanetlinkCoreEmojiType *snowman __attribute__((swift_name("snowman")));
@property (class, readonly) PlanetlinkCoreEmojiType *comet __attribute__((swift_name("comet")));
@property (class, readonly) PlanetlinkCoreEmojiType *phone __attribute__((swift_name("phone")));
@property (class, readonly) PlanetlinkCoreEmojiType *ballotboxwithcheck __attribute__((swift_name("ballotboxwithcheck")));
@property (class, readonly) PlanetlinkCoreEmojiType *umbrellawithraindrops __attribute__((swift_name("umbrellawithraindrops")));
@property (class, readonly) PlanetlinkCoreEmojiType *coffee __attribute__((swift_name("coffee")));
@property (class, readonly) PlanetlinkCoreEmojiType *shamrock __attribute__((swift_name("shamrock")));
@property (class, readonly) PlanetlinkCoreEmojiType *pointup __attribute__((swift_name("pointup")));
@property (class, readonly) PlanetlinkCoreEmojiType *skullandcrossbones __attribute__((swift_name("skullandcrossbones")));
@property (class, readonly) PlanetlinkCoreEmojiType *radioactivesign __attribute__((swift_name("radioactivesign")));
@property (class, readonly) PlanetlinkCoreEmojiType *biohazardsign __attribute__((swift_name("biohazardsign")));
@property (class, readonly) PlanetlinkCoreEmojiType *orthodoxcross __attribute__((swift_name("orthodoxcross")));
@property (class, readonly) PlanetlinkCoreEmojiType *starandcrescent __attribute__((swift_name("starandcrescent")));
@property (class, readonly) PlanetlinkCoreEmojiType *peacesymbol __attribute__((swift_name("peacesymbol")));
@property (class, readonly) PlanetlinkCoreEmojiType *yinyang __attribute__((swift_name("yinyang")));
@property (class, readonly) PlanetlinkCoreEmojiType *wheelofdharma __attribute__((swift_name("wheelofdharma")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitefrowningface __attribute__((swift_name("whitefrowningface")));
@property (class, readonly) PlanetlinkCoreEmojiType *relaxed __attribute__((swift_name("relaxed")));
@property (class, readonly) PlanetlinkCoreEmojiType *femalesign __attribute__((swift_name("femalesign")));
@property (class, readonly) PlanetlinkCoreEmojiType *malesign __attribute__((swift_name("malesign")));
@property (class, readonly) PlanetlinkCoreEmojiType *aries __attribute__((swift_name("aries")));
@property (class, readonly) PlanetlinkCoreEmojiType *taurus __attribute__((swift_name("taurus")));
@property (class, readonly) PlanetlinkCoreEmojiType *gemini __attribute__((swift_name("gemini")));
@property (class, readonly) PlanetlinkCoreEmojiType *cancer __attribute__((swift_name("cancer")));
@property (class, readonly) PlanetlinkCoreEmojiType *leo __attribute__((swift_name("leo")));
@property (class, readonly) PlanetlinkCoreEmojiType *virgo __attribute__((swift_name("virgo")));
@property (class, readonly) PlanetlinkCoreEmojiType *libra __attribute__((swift_name("libra")));
@property (class, readonly) PlanetlinkCoreEmojiType *scorpius __attribute__((swift_name("scorpius")));
@property (class, readonly) PlanetlinkCoreEmojiType *sagittarius __attribute__((swift_name("sagittarius")));
@property (class, readonly) PlanetlinkCoreEmojiType *capricorn __attribute__((swift_name("capricorn")));
@property (class, readonly) PlanetlinkCoreEmojiType *aquarius __attribute__((swift_name("aquarius")));
@property (class, readonly) PlanetlinkCoreEmojiType *pisces __attribute__((swift_name("pisces")));
@property (class, readonly) PlanetlinkCoreEmojiType *chesspawn __attribute__((swift_name("chesspawn")));
@property (class, readonly) PlanetlinkCoreEmojiType *spades __attribute__((swift_name("spades")));
@property (class, readonly) PlanetlinkCoreEmojiType *clubs __attribute__((swift_name("clubs")));
@property (class, readonly) PlanetlinkCoreEmojiType *hearts __attribute__((swift_name("hearts")));
@property (class, readonly) PlanetlinkCoreEmojiType *diamonds __attribute__((swift_name("diamonds")));
@property (class, readonly) PlanetlinkCoreEmojiType *hotsprings __attribute__((swift_name("hotsprings")));
@property (class, readonly) PlanetlinkCoreEmojiType *recycle __attribute__((swift_name("recycle")));
@property (class, readonly) PlanetlinkCoreEmojiType *infinity __attribute__((swift_name("infinity")));
@property (class, readonly) PlanetlinkCoreEmojiType *wheelchair __attribute__((swift_name("wheelchair")));
@property (class, readonly) PlanetlinkCoreEmojiType *hammerandpick __attribute__((swift_name("hammerandpick")));
@property (class, readonly) PlanetlinkCoreEmojiType *anchor __attribute__((swift_name("anchor")));
@property (class, readonly) PlanetlinkCoreEmojiType *crossedswords __attribute__((swift_name("crossedswords")));
@property (class, readonly) PlanetlinkCoreEmojiType *medicalsymbol __attribute__((swift_name("medicalsymbol")));
@property (class, readonly) PlanetlinkCoreEmojiType *scales __attribute__((swift_name("scales")));
@property (class, readonly) PlanetlinkCoreEmojiType *alembic __attribute__((swift_name("alembic")));
@property (class, readonly) PlanetlinkCoreEmojiType *gear __attribute__((swift_name("gear")));
@property (class, readonly) PlanetlinkCoreEmojiType *atomsymbol __attribute__((swift_name("atomsymbol")));
@property (class, readonly) PlanetlinkCoreEmojiType *fleurdelis __attribute__((swift_name("fleurdelis")));
@property (class, readonly) PlanetlinkCoreEmojiType *warning __attribute__((swift_name("warning")));
@property (class, readonly) PlanetlinkCoreEmojiType *zap __attribute__((swift_name("zap")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitecircle __attribute__((swift_name("whitecircle")));
@property (class, readonly) PlanetlinkCoreEmojiType *blackcircle __attribute__((swift_name("blackcircle")));
@property (class, readonly) PlanetlinkCoreEmojiType *coffin __attribute__((swift_name("coffin")));
@property (class, readonly) PlanetlinkCoreEmojiType *funeralurn __attribute__((swift_name("funeralurn")));
@property (class, readonly) PlanetlinkCoreEmojiType *soccer __attribute__((swift_name("soccer")));
@property (class, readonly) PlanetlinkCoreEmojiType *baseball __attribute__((swift_name("baseball")));
@property (class, readonly) PlanetlinkCoreEmojiType *snowmanwithoutsnow __attribute__((swift_name("snowmanwithoutsnow")));
@property (class, readonly) PlanetlinkCoreEmojiType *partlysunny __attribute__((swift_name("partlysunny")));
@property (class, readonly) PlanetlinkCoreEmojiType *thundercloudandrain __attribute__((swift_name("thundercloudandrain")));
@property (class, readonly) PlanetlinkCoreEmojiType *ophiuchus __attribute__((swift_name("ophiuchus")));
@property (class, readonly) PlanetlinkCoreEmojiType *pick __attribute__((swift_name("pick")));
@property (class, readonly) PlanetlinkCoreEmojiType *helmetwithwhitecross __attribute__((swift_name("helmetwithwhitecross")));
@property (class, readonly) PlanetlinkCoreEmojiType *chains __attribute__((swift_name("chains")));
@property (class, readonly) PlanetlinkCoreEmojiType *noentry __attribute__((swift_name("noentry")));
@property (class, readonly) PlanetlinkCoreEmojiType *shintoshrine __attribute__((swift_name("shintoshrine")));
@property (class, readonly) PlanetlinkCoreEmojiType *church __attribute__((swift_name("church")));
@property (class, readonly) PlanetlinkCoreEmojiType *mountain __attribute__((swift_name("mountain")));
@property (class, readonly) PlanetlinkCoreEmojiType *umbrellaonground __attribute__((swift_name("umbrellaonground")));
@property (class, readonly) PlanetlinkCoreEmojiType *fountain __attribute__((swift_name("fountain")));
@property (class, readonly) PlanetlinkCoreEmojiType *golf __attribute__((swift_name("golf")));
@property (class, readonly) PlanetlinkCoreEmojiType *ferry __attribute__((swift_name("ferry")));
@property (class, readonly) PlanetlinkCoreEmojiType *boat __attribute__((swift_name("boat")));
@property (class, readonly) PlanetlinkCoreEmojiType *skier __attribute__((swift_name("skier")));
@property (class, readonly) PlanetlinkCoreEmojiType *iceskate __attribute__((swift_name("iceskate")));
@property (class, readonly) PlanetlinkCoreEmojiType *womanbouncingball __attribute__((swift_name("womanbouncingball")));
@property (class, readonly) PlanetlinkCoreEmojiType *manbouncingball __attribute__((swift_name("manbouncingball")));
@property (class, readonly) PlanetlinkCoreEmojiType *personwithball __attribute__((swift_name("personwithball")));
@property (class, readonly) PlanetlinkCoreEmojiType *tent __attribute__((swift_name("tent")));
@property (class, readonly) PlanetlinkCoreEmojiType *fuelpump __attribute__((swift_name("fuelpump")));
@property (class, readonly) PlanetlinkCoreEmojiType *scissors __attribute__((swift_name("scissors")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitecheckmark __attribute__((swift_name("whitecheckmark")));
@property (class, readonly) PlanetlinkCoreEmojiType *airplane __attribute__((swift_name("airplane")));
@property (class, readonly) PlanetlinkCoreEmojiType *email_ __attribute__((swift_name("email_")));
@property (class, readonly) PlanetlinkCoreEmojiType *fist __attribute__((swift_name("fist")));
@property (class, readonly) PlanetlinkCoreEmojiType *hand __attribute__((swift_name("hand")));
@property (class, readonly) PlanetlinkCoreEmojiType *v __attribute__((swift_name("v")));
@property (class, readonly) PlanetlinkCoreEmojiType *writinghand __attribute__((swift_name("writinghand")));
@property (class, readonly) PlanetlinkCoreEmojiType *pencil2 __attribute__((swift_name("pencil2")));
@property (class, readonly) PlanetlinkCoreEmojiType *blacknib __attribute__((swift_name("blacknib")));
@property (class, readonly) PlanetlinkCoreEmojiType *heavycheckmark __attribute__((swift_name("heavycheckmark")));
@property (class, readonly) PlanetlinkCoreEmojiType *heavymultiplicationx __attribute__((swift_name("heavymultiplicationx")));
@property (class, readonly) PlanetlinkCoreEmojiType *latincross __attribute__((swift_name("latincross")));
@property (class, readonly) PlanetlinkCoreEmojiType *starofdavid __attribute__((swift_name("starofdavid")));
@property (class, readonly) PlanetlinkCoreEmojiType *sparkles __attribute__((swift_name("sparkles")));
@property (class, readonly) PlanetlinkCoreEmojiType *eightspokedasterisk __attribute__((swift_name("eightspokedasterisk")));
@property (class, readonly) PlanetlinkCoreEmojiType *eightpointedblackstar __attribute__((swift_name("eightpointedblackstar")));
@property (class, readonly) PlanetlinkCoreEmojiType *snowflake __attribute__((swift_name("snowflake")));
@property (class, readonly) PlanetlinkCoreEmojiType *sparkle __attribute__((swift_name("sparkle")));
@property (class, readonly) PlanetlinkCoreEmojiType *x __attribute__((swift_name("x")));
@property (class, readonly) PlanetlinkCoreEmojiType *negativesquaredcrossmark __attribute__((swift_name("negativesquaredcrossmark")));
@property (class, readonly) PlanetlinkCoreEmojiType *question __attribute__((swift_name("question")));
@property (class, readonly) PlanetlinkCoreEmojiType *greyquestion __attribute__((swift_name("greyquestion")));
@property (class, readonly) PlanetlinkCoreEmojiType *greyexclamation __attribute__((swift_name("greyexclamation")));
@property (class, readonly) PlanetlinkCoreEmojiType *exclamation __attribute__((swift_name("exclamation")));
@property (class, readonly) PlanetlinkCoreEmojiType *heavyheartexclamationmarkornament __attribute__((swift_name("heavyheartexclamationmarkornament")));
@property (class, readonly) PlanetlinkCoreEmojiType *heart __attribute__((swift_name("heart")));
@property (class, readonly) PlanetlinkCoreEmojiType *heavyplussign __attribute__((swift_name("heavyplussign")));
@property (class, readonly) PlanetlinkCoreEmojiType *heavyminussign __attribute__((swift_name("heavyminussign")));
@property (class, readonly) PlanetlinkCoreEmojiType *heavydivisionsign __attribute__((swift_name("heavydivisionsign")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowright __attribute__((swift_name("arrowright")));
@property (class, readonly) PlanetlinkCoreEmojiType *curlyloop __attribute__((swift_name("curlyloop")));
@property (class, readonly) PlanetlinkCoreEmojiType *loop __attribute__((swift_name("loop")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowheadingup __attribute__((swift_name("arrowheadingup")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowheadingdown __attribute__((swift_name("arrowheadingdown")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowleft __attribute__((swift_name("arrowleft")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowup __attribute__((swift_name("arrowup")));
@property (class, readonly) PlanetlinkCoreEmojiType *arrowdown __attribute__((swift_name("arrowdown")));
@property (class, readonly) PlanetlinkCoreEmojiType *blacklargesquare __attribute__((swift_name("blacklargesquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *whitelargesquare __attribute__((swift_name("whitelargesquare")));
@property (class, readonly) PlanetlinkCoreEmojiType *star __attribute__((swift_name("star")));
@property (class, readonly) PlanetlinkCoreEmojiType *o __attribute__((swift_name("o")));
@property (class, readonly) PlanetlinkCoreEmojiType *wavydash __attribute__((swift_name("wavydash")));
@property (class, readonly) PlanetlinkCoreEmojiType *partalternationmark __attribute__((swift_name("partalternationmark")));
@property (class, readonly) PlanetlinkCoreEmojiType *congratulations __attribute__((swift_name("congratulations")));
@property (class, readonly) PlanetlinkCoreEmojiType *secret __attribute__((swift_name("secret")));
+ (PlanetlinkKotlinArray<PlanetlinkCoreEmojiType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PlanetlinkCoreEmojiType *> *entries __attribute__((swift_name("entries")));
- (PlanetlinkCoreEmojiCategoryType *)category __attribute__((swift_name("category()")));
@property (readonly, getter=category_) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *emoji __attribute__((swift_name("emoji")));
@property (readonly) NSString *expr __attribute__((swift_name("expr")));
@property (readonly) PlanetlinkInt * _Nullable level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojiVariationType")))
@interface PlanetlinkCoreEmojiVariationType : PlanetlinkKotlinEnum<PlanetlinkCoreEmojiVariationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PlanetlinkCoreEmojiVariationTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *santaskintone2 __attribute__((swift_name("santaskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *santaskintone3 __attribute__((swift_name("santaskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *santaskintone4 __attribute__((swift_name("santaskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *santaskintone5 __attribute__((swift_name("santaskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *santaskintone6 __attribute__((swift_name("santaskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *snowboarderskintone2 __attribute__((swift_name("snowboarderskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *snowboarderskintone3 __attribute__((swift_name("snowboarderskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *snowboarderskintone4 __attribute__((swift_name("snowboarderskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *snowboarderskintone5 __attribute__((swift_name("snowboarderskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *snowboarderskintone6 __attribute__((swift_name("snowboarderskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrunningskintone2 __attribute__((swift_name("womanrunningskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrunningskintone3 __attribute__((swift_name("womanrunningskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrunningskintone4 __attribute__((swift_name("womanrunningskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrunningskintone5 __attribute__((swift_name("womanrunningskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrunningskintone6 __attribute__((swift_name("womanrunningskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrunningskintone2 __attribute__((swift_name("manrunningskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrunningskintone3 __attribute__((swift_name("manrunningskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrunningskintone4 __attribute__((swift_name("manrunningskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrunningskintone5 __attribute__((swift_name("manrunningskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrunningskintone6 __attribute__((swift_name("manrunningskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *runnerskintone2 __attribute__((swift_name("runnerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *runnerskintone3 __attribute__((swift_name("runnerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *runnerskintone4 __attribute__((swift_name("runnerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *runnerskintone5 __attribute__((swift_name("runnerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *runnerskintone6 __attribute__((swift_name("runnerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womansurfingskintone2 __attribute__((swift_name("womansurfingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womansurfingskintone3 __attribute__((swift_name("womansurfingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womansurfingskintone4 __attribute__((swift_name("womansurfingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womansurfingskintone5 __attribute__((swift_name("womansurfingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womansurfingskintone6 __attribute__((swift_name("womansurfingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mansurfingskintone2 __attribute__((swift_name("mansurfingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mansurfingskintone3 __attribute__((swift_name("mansurfingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mansurfingskintone4 __attribute__((swift_name("mansurfingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mansurfingskintone5 __attribute__((swift_name("mansurfingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mansurfingskintone6 __attribute__((swift_name("mansurfingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *surferskintone2 __attribute__((swift_name("surferskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *surferskintone3 __attribute__((swift_name("surferskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *surferskintone4 __attribute__((swift_name("surferskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *surferskintone5 __attribute__((swift_name("surferskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *surferskintone6 __attribute__((swift_name("surferskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *horseracingskintone2 __attribute__((swift_name("horseracingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *horseracingskintone3 __attribute__((swift_name("horseracingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *horseracingskintone4 __attribute__((swift_name("horseracingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *horseracingskintone5 __attribute__((swift_name("horseracingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *horseracingskintone6 __attribute__((swift_name("horseracingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanswimmingskintone2 __attribute__((swift_name("womanswimmingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanswimmingskintone3 __attribute__((swift_name("womanswimmingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanswimmingskintone4 __attribute__((swift_name("womanswimmingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanswimmingskintone5 __attribute__((swift_name("womanswimmingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanswimmingskintone6 __attribute__((swift_name("womanswimmingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manswimmingskintone2 __attribute__((swift_name("manswimmingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manswimmingskintone3 __attribute__((swift_name("manswimmingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manswimmingskintone4 __attribute__((swift_name("manswimmingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manswimmingskintone5 __attribute__((swift_name("manswimmingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manswimmingskintone6 __attribute__((swift_name("manswimmingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *swimmerskintone2 __attribute__((swift_name("swimmerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *swimmerskintone3 __attribute__((swift_name("swimmerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *swimmerskintone4 __attribute__((swift_name("swimmerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *swimmerskintone5 __attribute__((swift_name("swimmerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *swimmerskintone6 __attribute__((swift_name("swimmerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanliftingweightsskintone2 __attribute__((swift_name("womanliftingweightsskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanliftingweightsskintone3 __attribute__((swift_name("womanliftingweightsskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanliftingweightsskintone4 __attribute__((swift_name("womanliftingweightsskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanliftingweightsskintone5 __attribute__((swift_name("womanliftingweightsskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanliftingweightsskintone6 __attribute__((swift_name("womanliftingweightsskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manliftingweightsskintone2 __attribute__((swift_name("manliftingweightsskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manliftingweightsskintone3 __attribute__((swift_name("manliftingweightsskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manliftingweightsskintone4 __attribute__((swift_name("manliftingweightsskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manliftingweightsskintone5 __attribute__((swift_name("manliftingweightsskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manliftingweightsskintone6 __attribute__((swift_name("manliftingweightsskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *weightlifterskintone2 __attribute__((swift_name("weightlifterskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *weightlifterskintone3 __attribute__((swift_name("weightlifterskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *weightlifterskintone4 __attribute__((swift_name("weightlifterskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *weightlifterskintone5 __attribute__((swift_name("weightlifterskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *weightlifterskintone6 __attribute__((swift_name("weightlifterskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangolfingskintone2 __attribute__((swift_name("womangolfingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangolfingskintone3 __attribute__((swift_name("womangolfingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangolfingskintone4 __attribute__((swift_name("womangolfingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangolfingskintone5 __attribute__((swift_name("womangolfingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangolfingskintone6 __attribute__((swift_name("womangolfingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangolfingskintone2 __attribute__((swift_name("mangolfingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangolfingskintone3 __attribute__((swift_name("mangolfingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangolfingskintone4 __attribute__((swift_name("mangolfingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangolfingskintone5 __attribute__((swift_name("mangolfingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangolfingskintone6 __attribute__((swift_name("mangolfingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *golferskintone2 __attribute__((swift_name("golferskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *golferskintone3 __attribute__((swift_name("golferskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *golferskintone4 __attribute__((swift_name("golferskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *golferskintone5 __attribute__((swift_name("golferskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *golferskintone6 __attribute__((swift_name("golferskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earskintone2 __attribute__((swift_name("earskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earskintone3 __attribute__((swift_name("earskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earskintone4 __attribute__((swift_name("earskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earskintone5 __attribute__((swift_name("earskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earskintone6 __attribute__((swift_name("earskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *noseskintone2 __attribute__((swift_name("noseskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *noseskintone3 __attribute__((swift_name("noseskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *noseskintone4 __attribute__((swift_name("noseskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *noseskintone5 __attribute__((swift_name("noseskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *noseskintone6 __attribute__((swift_name("noseskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointup2skintone2 __attribute__((swift_name("pointup2skintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointup2skintone3 __attribute__((swift_name("pointup2skintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointup2skintone4 __attribute__((swift_name("pointup2skintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointup2skintone5 __attribute__((swift_name("pointup2skintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointup2skintone6 __attribute__((swift_name("pointup2skintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointdownskintone2 __attribute__((swift_name("pointdownskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointdownskintone3 __attribute__((swift_name("pointdownskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointdownskintone4 __attribute__((swift_name("pointdownskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointdownskintone5 __attribute__((swift_name("pointdownskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointdownskintone6 __attribute__((swift_name("pointdownskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointleftskintone2 __attribute__((swift_name("pointleftskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointleftskintone3 __attribute__((swift_name("pointleftskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointleftskintone4 __attribute__((swift_name("pointleftskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointleftskintone5 __attribute__((swift_name("pointleftskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointleftskintone6 __attribute__((swift_name("pointleftskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointrightskintone2 __attribute__((swift_name("pointrightskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointrightskintone3 __attribute__((swift_name("pointrightskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointrightskintone4 __attribute__((swift_name("pointrightskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointrightskintone5 __attribute__((swift_name("pointrightskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointrightskintone6 __attribute__((swift_name("pointrightskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepunchskintone2 __attribute__((swift_name("facepunchskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepunchskintone3 __attribute__((swift_name("facepunchskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepunchskintone4 __attribute__((swift_name("facepunchskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepunchskintone5 __attribute__((swift_name("facepunchskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepunchskintone6 __attribute__((swift_name("facepunchskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waveskintone2 __attribute__((swift_name("waveskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waveskintone3 __attribute__((swift_name("waveskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waveskintone4 __attribute__((swift_name("waveskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waveskintone5 __attribute__((swift_name("waveskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waveskintone6 __attribute__((swift_name("waveskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okhandskintone2 __attribute__((swift_name("okhandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okhandskintone3 __attribute__((swift_name("okhandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okhandskintone4 __attribute__((swift_name("okhandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okhandskintone5 __attribute__((swift_name("okhandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okhandskintone6 __attribute__((swift_name("okhandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiplus1skintone2 __attribute__((swift_name("emojiplus1skintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiplus1skintone3 __attribute__((swift_name("emojiplus1skintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiplus1skintone4 __attribute__((swift_name("emojiplus1skintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiplus1skintone5 __attribute__((swift_name("emojiplus1skintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiplus1skintone6 __attribute__((swift_name("emojiplus1skintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiminus1skintone2 __attribute__((swift_name("emojiminus1skintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiminus1skintone3 __attribute__((swift_name("emojiminus1skintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiminus1skintone4 __attribute__((swift_name("emojiminus1skintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiminus1skintone5 __attribute__((swift_name("emojiminus1skintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *emojiminus1skintone6 __attribute__((swift_name("emojiminus1skintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *clapskintone2 __attribute__((swift_name("clapskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *clapskintone3 __attribute__((swift_name("clapskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *clapskintone4 __attribute__((swift_name("clapskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *clapskintone5 __attribute__((swift_name("clapskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *clapskintone6 __attribute__((swift_name("clapskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *openhandsskintone2 __attribute__((swift_name("openhandsskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *openhandsskintone3 __attribute__((swift_name("openhandsskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *openhandsskintone4 __attribute__((swift_name("openhandsskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *openhandsskintone5 __attribute__((swift_name("openhandsskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *openhandsskintone6 __attribute__((swift_name("openhandsskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *boyskintone2 __attribute__((swift_name("boyskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *boyskintone3 __attribute__((swift_name("boyskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *boyskintone4 __attribute__((swift_name("boyskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *boyskintone5 __attribute__((swift_name("boyskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *boyskintone6 __attribute__((swift_name("boyskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *girlskintone2 __attribute__((swift_name("girlskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *girlskintone3 __attribute__((swift_name("girlskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *girlskintone4 __attribute__((swift_name("girlskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *girlskintone5 __attribute__((swift_name("girlskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *girlskintone6 __attribute__((swift_name("girlskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefarmerskintone2 __attribute__((swift_name("malefarmerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefarmerskintone3 __attribute__((swift_name("malefarmerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefarmerskintone4 __attribute__((swift_name("malefarmerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefarmerskintone5 __attribute__((swift_name("malefarmerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefarmerskintone6 __attribute__((swift_name("malefarmerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malecookskintone2 __attribute__((swift_name("malecookskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malecookskintone3 __attribute__((swift_name("malecookskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malecookskintone4 __attribute__((swift_name("malecookskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malecookskintone5 __attribute__((swift_name("malecookskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malecookskintone6 __attribute__((swift_name("malecookskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malestudentskintone2 __attribute__((swift_name("malestudentskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malestudentskintone3 __attribute__((swift_name("malestudentskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malestudentskintone4 __attribute__((swift_name("malestudentskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malestudentskintone5 __attribute__((swift_name("malestudentskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malestudentskintone6 __attribute__((swift_name("malestudentskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesingerskintone2 __attribute__((swift_name("malesingerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesingerskintone3 __attribute__((swift_name("malesingerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesingerskintone4 __attribute__((swift_name("malesingerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesingerskintone5 __attribute__((swift_name("malesingerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesingerskintone6 __attribute__((swift_name("malesingerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleartistskintone2 __attribute__((swift_name("maleartistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleartistskintone3 __attribute__((swift_name("maleartistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleartistskintone4 __attribute__((swift_name("maleartistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleartistskintone5 __attribute__((swift_name("maleartistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleartistskintone6 __attribute__((swift_name("maleartistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleteacherskintone2 __attribute__((swift_name("maleteacherskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleteacherskintone3 __attribute__((swift_name("maleteacherskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleteacherskintone4 __attribute__((swift_name("maleteacherskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleteacherskintone5 __attribute__((swift_name("maleteacherskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleteacherskintone6 __attribute__((swift_name("maleteacherskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefactoryworkerskintone2 __attribute__((swift_name("malefactoryworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefactoryworkerskintone3 __attribute__((swift_name("malefactoryworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefactoryworkerskintone4 __attribute__((swift_name("malefactoryworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefactoryworkerskintone5 __attribute__((swift_name("malefactoryworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefactoryworkerskintone6 __attribute__((swift_name("malefactoryworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maletechnologistskintone2 __attribute__((swift_name("maletechnologistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maletechnologistskintone3 __attribute__((swift_name("maletechnologistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maletechnologistskintone4 __attribute__((swift_name("maletechnologistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maletechnologistskintone5 __attribute__((swift_name("maletechnologistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maletechnologistskintone6 __attribute__((swift_name("maletechnologistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleofficeworkerskintone2 __attribute__((swift_name("maleofficeworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleofficeworkerskintone3 __attribute__((swift_name("maleofficeworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleofficeworkerskintone4 __attribute__((swift_name("maleofficeworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleofficeworkerskintone5 __attribute__((swift_name("maleofficeworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleofficeworkerskintone6 __attribute__((swift_name("maleofficeworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemechanicskintone2 __attribute__((swift_name("malemechanicskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemechanicskintone3 __attribute__((swift_name("malemechanicskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemechanicskintone4 __attribute__((swift_name("malemechanicskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemechanicskintone5 __attribute__((swift_name("malemechanicskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemechanicskintone6 __attribute__((swift_name("malemechanicskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malescientistskintone2 __attribute__((swift_name("malescientistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malescientistskintone3 __attribute__((swift_name("malescientistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malescientistskintone4 __attribute__((swift_name("malescientistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malescientistskintone5 __attribute__((swift_name("malescientistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malescientistskintone6 __attribute__((swift_name("malescientistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleastronautskintone2 __attribute__((swift_name("maleastronautskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleastronautskintone3 __attribute__((swift_name("maleastronautskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleastronautskintone4 __attribute__((swift_name("maleastronautskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleastronautskintone5 __attribute__((swift_name("maleastronautskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleastronautskintone6 __attribute__((swift_name("maleastronautskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefirefighterskintone2 __attribute__((swift_name("malefirefighterskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefirefighterskintone3 __attribute__((swift_name("malefirefighterskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefirefighterskintone4 __attribute__((swift_name("malefirefighterskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefirefighterskintone5 __attribute__((swift_name("malefirefighterskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefirefighterskintone6 __attribute__((swift_name("malefirefighterskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithprobingcaneskintone2 __attribute__((swift_name("manwithprobingcaneskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithprobingcaneskintone3 __attribute__((swift_name("manwithprobingcaneskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithprobingcaneskintone4 __attribute__((swift_name("manwithprobingcaneskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithprobingcaneskintone5 __attribute__((swift_name("manwithprobingcaneskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithprobingcaneskintone6 __attribute__((swift_name("manwithprobingcaneskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedmanskintone2 __attribute__((swift_name("redhairedmanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedmanskintone3 __attribute__((swift_name("redhairedmanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedmanskintone4 __attribute__((swift_name("redhairedmanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedmanskintone5 __attribute__((swift_name("redhairedmanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedmanskintone6 __attribute__((swift_name("redhairedmanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedmanskintone2 __attribute__((swift_name("curlyhairedmanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedmanskintone3 __attribute__((swift_name("curlyhairedmanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedmanskintone4 __attribute__((swift_name("curlyhairedmanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedmanskintone5 __attribute__((swift_name("curlyhairedmanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedmanskintone6 __attribute__((swift_name("curlyhairedmanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldmanskintone2 __attribute__((swift_name("baldmanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldmanskintone3 __attribute__((swift_name("baldmanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldmanskintone4 __attribute__((swift_name("baldmanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldmanskintone5 __attribute__((swift_name("baldmanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldmanskintone6 __attribute__((swift_name("baldmanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedmanskintone2 __attribute__((swift_name("whitehairedmanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedmanskintone3 __attribute__((swift_name("whitehairedmanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedmanskintone4 __attribute__((swift_name("whitehairedmanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedmanskintone5 __attribute__((swift_name("whitehairedmanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedmanskintone6 __attribute__((swift_name("whitehairedmanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmotorizedwheelchairskintone2 __attribute__((swift_name("maninmotorizedwheelchairskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmotorizedwheelchairskintone3 __attribute__((swift_name("maninmotorizedwheelchairskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmotorizedwheelchairskintone4 __attribute__((swift_name("maninmotorizedwheelchairskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmotorizedwheelchairskintone5 __attribute__((swift_name("maninmotorizedwheelchairskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmotorizedwheelchairskintone6 __attribute__((swift_name("maninmotorizedwheelchairskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmanualwheelchairskintone2 __attribute__((swift_name("maninmanualwheelchairskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmanualwheelchairskintone3 __attribute__((swift_name("maninmanualwheelchairskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmanualwheelchairskintone4 __attribute__((swift_name("maninmanualwheelchairskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmanualwheelchairskintone5 __attribute__((swift_name("maninmanualwheelchairskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninmanualwheelchairskintone6 __attribute__((swift_name("maninmanualwheelchairskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledoctorskintone2 __attribute__((swift_name("maledoctorskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledoctorskintone3 __attribute__((swift_name("maledoctorskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledoctorskintone4 __attribute__((swift_name("maledoctorskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledoctorskintone5 __attribute__((swift_name("maledoctorskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledoctorskintone6 __attribute__((swift_name("maledoctorskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malejudgeskintone2 __attribute__((swift_name("malejudgeskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malejudgeskintone3 __attribute__((swift_name("malejudgeskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malejudgeskintone4 __attribute__((swift_name("malejudgeskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malejudgeskintone5 __attribute__((swift_name("malejudgeskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malejudgeskintone6 __attribute__((swift_name("malejudgeskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepilotskintone2 __attribute__((swift_name("malepilotskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepilotskintone3 __attribute__((swift_name("malepilotskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepilotskintone4 __attribute__((swift_name("malepilotskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepilotskintone5 __attribute__((swift_name("malepilotskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepilotskintone6 __attribute__((swift_name("malepilotskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manskintone2 __attribute__((swift_name("manskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manskintone3 __attribute__((swift_name("manskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manskintone4 __attribute__((swift_name("manskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manskintone5 __attribute__((swift_name("manskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manskintone6 __attribute__((swift_name("manskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefarmerskintone2 __attribute__((swift_name("femalefarmerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefarmerskintone3 __attribute__((swift_name("femalefarmerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefarmerskintone4 __attribute__((swift_name("femalefarmerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefarmerskintone5 __attribute__((swift_name("femalefarmerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefarmerskintone6 __attribute__((swift_name("femalefarmerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalecookskintone2 __attribute__((swift_name("femalecookskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalecookskintone3 __attribute__((swift_name("femalecookskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalecookskintone4 __attribute__((swift_name("femalecookskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalecookskintone5 __attribute__((swift_name("femalecookskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalecookskintone6 __attribute__((swift_name("femalecookskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalestudentskintone2 __attribute__((swift_name("femalestudentskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalestudentskintone3 __attribute__((swift_name("femalestudentskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalestudentskintone4 __attribute__((swift_name("femalestudentskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalestudentskintone5 __attribute__((swift_name("femalestudentskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalestudentskintone6 __attribute__((swift_name("femalestudentskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesingerskintone2 __attribute__((swift_name("femalesingerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesingerskintone3 __attribute__((swift_name("femalesingerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesingerskintone4 __attribute__((swift_name("femalesingerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesingerskintone5 __attribute__((swift_name("femalesingerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesingerskintone6 __attribute__((swift_name("femalesingerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleartistskintone2 __attribute__((swift_name("femaleartistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleartistskintone3 __attribute__((swift_name("femaleartistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleartistskintone4 __attribute__((swift_name("femaleartistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleartistskintone5 __attribute__((swift_name("femaleartistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleartistskintone6 __attribute__((swift_name("femaleartistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleteacherskintone2 __attribute__((swift_name("femaleteacherskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleteacherskintone3 __attribute__((swift_name("femaleteacherskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleteacherskintone4 __attribute__((swift_name("femaleteacherskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleteacherskintone5 __attribute__((swift_name("femaleteacherskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleteacherskintone6 __attribute__((swift_name("femaleteacherskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefactoryworkerskintone2 __attribute__((swift_name("femalefactoryworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefactoryworkerskintone3 __attribute__((swift_name("femalefactoryworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefactoryworkerskintone4 __attribute__((swift_name("femalefactoryworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefactoryworkerskintone5 __attribute__((swift_name("femalefactoryworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefactoryworkerskintone6 __attribute__((swift_name("femalefactoryworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaletechnologistskintone2 __attribute__((swift_name("femaletechnologistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaletechnologistskintone3 __attribute__((swift_name("femaletechnologistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaletechnologistskintone4 __attribute__((swift_name("femaletechnologistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaletechnologistskintone5 __attribute__((swift_name("femaletechnologistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaletechnologistskintone6 __attribute__((swift_name("femaletechnologistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleofficeworkerskintone2 __attribute__((swift_name("femaleofficeworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleofficeworkerskintone3 __attribute__((swift_name("femaleofficeworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleofficeworkerskintone4 __attribute__((swift_name("femaleofficeworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleofficeworkerskintone5 __attribute__((swift_name("femaleofficeworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleofficeworkerskintone6 __attribute__((swift_name("femaleofficeworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemechanicskintone2 __attribute__((swift_name("femalemechanicskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemechanicskintone3 __attribute__((swift_name("femalemechanicskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemechanicskintone4 __attribute__((swift_name("femalemechanicskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemechanicskintone5 __attribute__((swift_name("femalemechanicskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemechanicskintone6 __attribute__((swift_name("femalemechanicskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalescientistskintone2 __attribute__((swift_name("femalescientistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalescientistskintone3 __attribute__((swift_name("femalescientistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalescientistskintone4 __attribute__((swift_name("femalescientistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalescientistskintone5 __attribute__((swift_name("femalescientistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalescientistskintone6 __attribute__((swift_name("femalescientistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleastronautskintone2 __attribute__((swift_name("femaleastronautskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleastronautskintone3 __attribute__((swift_name("femaleastronautskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleastronautskintone4 __attribute__((swift_name("femaleastronautskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleastronautskintone5 __attribute__((swift_name("femaleastronautskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleastronautskintone6 __attribute__((swift_name("femaleastronautskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefirefighterskintone2 __attribute__((swift_name("femalefirefighterskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefirefighterskintone3 __attribute__((swift_name("femalefirefighterskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefirefighterskintone4 __attribute__((swift_name("femalefirefighterskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefirefighterskintone5 __attribute__((swift_name("femalefirefighterskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefirefighterskintone6 __attribute__((swift_name("femalefirefighterskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwithprobingcaneskintone2 __attribute__((swift_name("womanwithprobingcaneskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwithprobingcaneskintone3 __attribute__((swift_name("womanwithprobingcaneskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwithprobingcaneskintone4 __attribute__((swift_name("womanwithprobingcaneskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwithprobingcaneskintone5 __attribute__((swift_name("womanwithprobingcaneskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwithprobingcaneskintone6 __attribute__((swift_name("womanwithprobingcaneskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedwomanskintone2 __attribute__((swift_name("redhairedwomanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedwomanskintone3 __attribute__((swift_name("redhairedwomanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedwomanskintone4 __attribute__((swift_name("redhairedwomanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedwomanskintone5 __attribute__((swift_name("redhairedwomanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedwomanskintone6 __attribute__((swift_name("redhairedwomanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedwomanskintone2 __attribute__((swift_name("curlyhairedwomanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedwomanskintone3 __attribute__((swift_name("curlyhairedwomanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedwomanskintone4 __attribute__((swift_name("curlyhairedwomanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedwomanskintone5 __attribute__((swift_name("curlyhairedwomanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedwomanskintone6 __attribute__((swift_name("curlyhairedwomanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldwomanskintone2 __attribute__((swift_name("baldwomanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldwomanskintone3 __attribute__((swift_name("baldwomanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldwomanskintone4 __attribute__((swift_name("baldwomanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldwomanskintone5 __attribute__((swift_name("baldwomanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldwomanskintone6 __attribute__((swift_name("baldwomanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedwomanskintone2 __attribute__((swift_name("whitehairedwomanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedwomanskintone3 __attribute__((swift_name("whitehairedwomanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedwomanskintone4 __attribute__((swift_name("whitehairedwomanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedwomanskintone5 __attribute__((swift_name("whitehairedwomanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedwomanskintone6 __attribute__((swift_name("whitehairedwomanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmotorizedwheelchairskintone2 __attribute__((swift_name("womaninmotorizedwheelchairskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmotorizedwheelchairskintone3 __attribute__((swift_name("womaninmotorizedwheelchairskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmotorizedwheelchairskintone4 __attribute__((swift_name("womaninmotorizedwheelchairskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmotorizedwheelchairskintone5 __attribute__((swift_name("womaninmotorizedwheelchairskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmotorizedwheelchairskintone6 __attribute__((swift_name("womaninmotorizedwheelchairskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmanualwheelchairskintone2 __attribute__((swift_name("womaninmanualwheelchairskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmanualwheelchairskintone3 __attribute__((swift_name("womaninmanualwheelchairskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmanualwheelchairskintone4 __attribute__((swift_name("womaninmanualwheelchairskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmanualwheelchairskintone5 __attribute__((swift_name("womaninmanualwheelchairskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninmanualwheelchairskintone6 __attribute__((swift_name("womaninmanualwheelchairskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledoctorskintone2 __attribute__((swift_name("femaledoctorskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledoctorskintone3 __attribute__((swift_name("femaledoctorskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledoctorskintone4 __attribute__((swift_name("femaledoctorskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledoctorskintone5 __attribute__((swift_name("femaledoctorskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledoctorskintone6 __attribute__((swift_name("femaledoctorskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalejudgeskintone2 __attribute__((swift_name("femalejudgeskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalejudgeskintone3 __attribute__((swift_name("femalejudgeskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalejudgeskintone4 __attribute__((swift_name("femalejudgeskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalejudgeskintone5 __attribute__((swift_name("femalejudgeskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalejudgeskintone6 __attribute__((swift_name("femalejudgeskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepilotskintone2 __attribute__((swift_name("femalepilotskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepilotskintone3 __attribute__((swift_name("femalepilotskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepilotskintone4 __attribute__((swift_name("femalepilotskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepilotskintone5 __attribute__((swift_name("femalepilotskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepilotskintone6 __attribute__((swift_name("femalepilotskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanskintone2 __attribute__((swift_name("womanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanskintone3 __attribute__((swift_name("womanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanskintone4 __attribute__((swift_name("womanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanskintone5 __attribute__((swift_name("womanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanskintone6 __attribute__((swift_name("womanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *coupleskintone2 __attribute__((swift_name("coupleskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *coupleskintone3 __attribute__((swift_name("coupleskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *coupleskintone4 __attribute__((swift_name("coupleskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *coupleskintone5 __attribute__((swift_name("coupleskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *coupleskintone6 __attribute__((swift_name("coupleskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twomenholdinghandsskintone2 __attribute__((swift_name("twomenholdinghandsskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twomenholdinghandsskintone3 __attribute__((swift_name("twomenholdinghandsskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twomenholdinghandsskintone4 __attribute__((swift_name("twomenholdinghandsskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twomenholdinghandsskintone5 __attribute__((swift_name("twomenholdinghandsskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twomenholdinghandsskintone6 __attribute__((swift_name("twomenholdinghandsskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twowomenholdinghandsskintone2 __attribute__((swift_name("twowomenholdinghandsskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twowomenholdinghandsskintone3 __attribute__((swift_name("twowomenholdinghandsskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twowomenholdinghandsskintone4 __attribute__((swift_name("twowomenholdinghandsskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twowomenholdinghandsskintone5 __attribute__((swift_name("twowomenholdinghandsskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *twowomenholdinghandsskintone6 __attribute__((swift_name("twowomenholdinghandsskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepoliceofficerskintone2 __attribute__((swift_name("femalepoliceofficerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepoliceofficerskintone3 __attribute__((swift_name("femalepoliceofficerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepoliceofficerskintone4 __attribute__((swift_name("femalepoliceofficerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepoliceofficerskintone5 __attribute__((swift_name("femalepoliceofficerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalepoliceofficerskintone6 __attribute__((swift_name("femalepoliceofficerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepoliceofficerskintone2 __attribute__((swift_name("malepoliceofficerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepoliceofficerskintone3 __attribute__((swift_name("malepoliceofficerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepoliceofficerskintone4 __attribute__((swift_name("malepoliceofficerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepoliceofficerskintone5 __attribute__((swift_name("malepoliceofficerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malepoliceofficerskintone6 __attribute__((swift_name("malepoliceofficerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *copskintone2 __attribute__((swift_name("copskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *copskintone3 __attribute__((swift_name("copskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *copskintone4 __attribute__((swift_name("copskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *copskintone5 __attribute__((swift_name("copskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *copskintone6 __attribute__((swift_name("copskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bridewithveilskintone2 __attribute__((swift_name("bridewithveilskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bridewithveilskintone3 __attribute__((swift_name("bridewithveilskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bridewithveilskintone4 __attribute__((swift_name("bridewithveilskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bridewithveilskintone5 __attribute__((swift_name("bridewithveilskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bridewithveilskintone6 __attribute__((swift_name("bridewithveilskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedwomanskintone2 __attribute__((swift_name("blondhairedwomanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedwomanskintone3 __attribute__((swift_name("blondhairedwomanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedwomanskintone4 __attribute__((swift_name("blondhairedwomanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedwomanskintone5 __attribute__((swift_name("blondhairedwomanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedwomanskintone6 __attribute__((swift_name("blondhairedwomanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedmanskintone2 __attribute__((swift_name("blondhairedmanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedmanskintone3 __attribute__((swift_name("blondhairedmanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedmanskintone4 __attribute__((swift_name("blondhairedmanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedmanskintone5 __attribute__((swift_name("blondhairedmanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *blondhairedmanskintone6 __attribute__((swift_name("blondhairedmanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithblondhairskintone2 __attribute__((swift_name("personwithblondhairskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithblondhairskintone3 __attribute__((swift_name("personwithblondhairskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithblondhairskintone4 __attribute__((swift_name("personwithblondhairskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithblondhairskintone5 __attribute__((swift_name("personwithblondhairskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithblondhairskintone6 __attribute__((swift_name("personwithblondhairskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithguapimaoskintone2 __attribute__((swift_name("manwithguapimaoskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithguapimaoskintone3 __attribute__((swift_name("manwithguapimaoskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithguapimaoskintone4 __attribute__((swift_name("manwithguapimaoskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithguapimaoskintone5 __attribute__((swift_name("manwithguapimaoskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithguapimaoskintone6 __attribute__((swift_name("manwithguapimaoskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwearingturbanskintone2 __attribute__((swift_name("womanwearingturbanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwearingturbanskintone3 __attribute__((swift_name("womanwearingturbanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwearingturbanskintone4 __attribute__((swift_name("womanwearingturbanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwearingturbanskintone5 __attribute__((swift_name("womanwearingturbanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwearingturbanskintone6 __attribute__((swift_name("womanwearingturbanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwearingturbanskintone2 __attribute__((swift_name("manwearingturbanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwearingturbanskintone3 __attribute__((swift_name("manwearingturbanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwearingturbanskintone4 __attribute__((swift_name("manwearingturbanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwearingturbanskintone5 __attribute__((swift_name("manwearingturbanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwearingturbanskintone6 __attribute__((swift_name("manwearingturbanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithturbanskintone2 __attribute__((swift_name("manwithturbanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithturbanskintone3 __attribute__((swift_name("manwithturbanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithturbanskintone4 __attribute__((swift_name("manwithturbanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithturbanskintone5 __attribute__((swift_name("manwithturbanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwithturbanskintone6 __attribute__((swift_name("manwithturbanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *oldermanskintone2 __attribute__((swift_name("oldermanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *oldermanskintone3 __attribute__((swift_name("oldermanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *oldermanskintone4 __attribute__((swift_name("oldermanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *oldermanskintone5 __attribute__((swift_name("oldermanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *oldermanskintone6 __attribute__((swift_name("oldermanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderwomanskintone2 __attribute__((swift_name("olderwomanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderwomanskintone3 __attribute__((swift_name("olderwomanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderwomanskintone4 __attribute__((swift_name("olderwomanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderwomanskintone5 __attribute__((swift_name("olderwomanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderwomanskintone6 __attribute__((swift_name("olderwomanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *babyskintone2 __attribute__((swift_name("babyskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *babyskintone3 __attribute__((swift_name("babyskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *babyskintone4 __attribute__((swift_name("babyskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *babyskintone5 __attribute__((swift_name("babyskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *babyskintone6 __attribute__((swift_name("babyskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleconstructionworkerskintone2 __attribute__((swift_name("femaleconstructionworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleconstructionworkerskintone3 __attribute__((swift_name("femaleconstructionworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleconstructionworkerskintone4 __attribute__((swift_name("femaleconstructionworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleconstructionworkerskintone5 __attribute__((swift_name("femaleconstructionworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleconstructionworkerskintone6 __attribute__((swift_name("femaleconstructionworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleconstructionworkerskintone2 __attribute__((swift_name("maleconstructionworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleconstructionworkerskintone3 __attribute__((swift_name("maleconstructionworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleconstructionworkerskintone4 __attribute__((swift_name("maleconstructionworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleconstructionworkerskintone5 __attribute__((swift_name("maleconstructionworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleconstructionworkerskintone6 __attribute__((swift_name("maleconstructionworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *constructionworkerskintone2 __attribute__((swift_name("constructionworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *constructionworkerskintone3 __attribute__((swift_name("constructionworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *constructionworkerskintone4 __attribute__((swift_name("constructionworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *constructionworkerskintone5 __attribute__((swift_name("constructionworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *constructionworkerskintone6 __attribute__((swift_name("constructionworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princessskintone2 __attribute__((swift_name("princessskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princessskintone3 __attribute__((swift_name("princessskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princessskintone4 __attribute__((swift_name("princessskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princessskintone5 __attribute__((swift_name("princessskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princessskintone6 __attribute__((swift_name("princessskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *angelskintone2 __attribute__((swift_name("angelskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *angelskintone3 __attribute__((swift_name("angelskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *angelskintone4 __attribute__((swift_name("angelskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *angelskintone5 __attribute__((swift_name("angelskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *angelskintone6 __attribute__((swift_name("angelskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womantippinghandskintone2 __attribute__((swift_name("womantippinghandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womantippinghandskintone3 __attribute__((swift_name("womantippinghandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womantippinghandskintone4 __attribute__((swift_name("womantippinghandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womantippinghandskintone5 __attribute__((swift_name("womantippinghandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womantippinghandskintone6 __attribute__((swift_name("womantippinghandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mantippinghandskintone2 __attribute__((swift_name("mantippinghandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mantippinghandskintone3 __attribute__((swift_name("mantippinghandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mantippinghandskintone4 __attribute__((swift_name("mantippinghandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mantippinghandskintone5 __attribute__((swift_name("mantippinghandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mantippinghandskintone6 __attribute__((swift_name("mantippinghandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *informationdeskpersonskintone2 __attribute__((swift_name("informationdeskpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *informationdeskpersonskintone3 __attribute__((swift_name("informationdeskpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *informationdeskpersonskintone4 __attribute__((swift_name("informationdeskpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *informationdeskpersonskintone5 __attribute__((swift_name("informationdeskpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *informationdeskpersonskintone6 __attribute__((swift_name("informationdeskpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleguardskintone2 __attribute__((swift_name("femaleguardskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleguardskintone3 __attribute__((swift_name("femaleguardskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleguardskintone4 __attribute__((swift_name("femaleguardskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleguardskintone5 __attribute__((swift_name("femaleguardskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleguardskintone6 __attribute__((swift_name("femaleguardskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleguardskintone2 __attribute__((swift_name("maleguardskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleguardskintone3 __attribute__((swift_name("maleguardskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleguardskintone4 __attribute__((swift_name("maleguardskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleguardskintone5 __attribute__((swift_name("maleguardskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleguardskintone6 __attribute__((swift_name("maleguardskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *guardsmanskintone2 __attribute__((swift_name("guardsmanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *guardsmanskintone3 __attribute__((swift_name("guardsmanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *guardsmanskintone4 __attribute__((swift_name("guardsmanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *guardsmanskintone5 __attribute__((swift_name("guardsmanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *guardsmanskintone6 __attribute__((swift_name("guardsmanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *dancerskintone2 __attribute__((swift_name("dancerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *dancerskintone3 __attribute__((swift_name("dancerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *dancerskintone4 __attribute__((swift_name("dancerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *dancerskintone5 __attribute__((swift_name("dancerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *dancerskintone6 __attribute__((swift_name("dancerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nailcareskintone2 __attribute__((swift_name("nailcareskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nailcareskintone3 __attribute__((swift_name("nailcareskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nailcareskintone4 __attribute__((swift_name("nailcareskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nailcareskintone5 __attribute__((swift_name("nailcareskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nailcareskintone6 __attribute__((swift_name("nailcareskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettingmassageskintone2 __attribute__((swift_name("womangettingmassageskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettingmassageskintone3 __attribute__((swift_name("womangettingmassageskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettingmassageskintone4 __attribute__((swift_name("womangettingmassageskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettingmassageskintone5 __attribute__((swift_name("womangettingmassageskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettingmassageskintone6 __attribute__((swift_name("womangettingmassageskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettingmassageskintone2 __attribute__((swift_name("mangettingmassageskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettingmassageskintone3 __attribute__((swift_name("mangettingmassageskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettingmassageskintone4 __attribute__((swift_name("mangettingmassageskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettingmassageskintone5 __attribute__((swift_name("mangettingmassageskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettingmassageskintone6 __attribute__((swift_name("mangettingmassageskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *massageskintone2 __attribute__((swift_name("massageskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *massageskintone3 __attribute__((swift_name("massageskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *massageskintone4 __attribute__((swift_name("massageskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *massageskintone5 __attribute__((swift_name("massageskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *massageskintone6 __attribute__((swift_name("massageskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettinghaircutskintone2 __attribute__((swift_name("womangettinghaircutskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettinghaircutskintone3 __attribute__((swift_name("womangettinghaircutskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettinghaircutskintone4 __attribute__((swift_name("womangettinghaircutskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettinghaircutskintone5 __attribute__((swift_name("womangettinghaircutskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangettinghaircutskintone6 __attribute__((swift_name("womangettinghaircutskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettinghaircutskintone2 __attribute__((swift_name("mangettinghaircutskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettinghaircutskintone3 __attribute__((swift_name("mangettinghaircutskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettinghaircutskintone4 __attribute__((swift_name("mangettinghaircutskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettinghaircutskintone5 __attribute__((swift_name("mangettinghaircutskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangettinghaircutskintone6 __attribute__((swift_name("mangettinghaircutskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *haircutskintone2 __attribute__((swift_name("haircutskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *haircutskintone3 __attribute__((swift_name("haircutskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *haircutskintone4 __attribute__((swift_name("haircutskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *haircutskintone5 __attribute__((swift_name("haircutskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *haircutskintone6 __attribute__((swift_name("haircutskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *muscleskintone2 __attribute__((swift_name("muscleskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *muscleskintone3 __attribute__((swift_name("muscleskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *muscleskintone4 __attribute__((swift_name("muscleskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *muscleskintone5 __attribute__((swift_name("muscleskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *muscleskintone6 __attribute__((swift_name("muscleskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninbusinesssuitlevitatingskintone2 __attribute__((swift_name("maninbusinesssuitlevitatingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninbusinesssuitlevitatingskintone3 __attribute__((swift_name("maninbusinesssuitlevitatingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninbusinesssuitlevitatingskintone4 __attribute__((swift_name("maninbusinesssuitlevitatingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninbusinesssuitlevitatingskintone5 __attribute__((swift_name("maninbusinesssuitlevitatingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninbusinesssuitlevitatingskintone6 __attribute__((swift_name("maninbusinesssuitlevitatingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledetectiveskintone2 __attribute__((swift_name("femaledetectiveskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledetectiveskintone3 __attribute__((swift_name("femaledetectiveskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledetectiveskintone4 __attribute__((swift_name("femaledetectiveskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledetectiveskintone5 __attribute__((swift_name("femaledetectiveskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaledetectiveskintone6 __attribute__((swift_name("femaledetectiveskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledetectiveskintone2 __attribute__((swift_name("maledetectiveskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledetectiveskintone3 __attribute__((swift_name("maledetectiveskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledetectiveskintone4 __attribute__((swift_name("maledetectiveskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledetectiveskintone5 __attribute__((swift_name("maledetectiveskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maledetectiveskintone6 __attribute__((swift_name("maledetectiveskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleuthorspyskintone2 __attribute__((swift_name("sleuthorspyskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleuthorspyskintone3 __attribute__((swift_name("sleuthorspyskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleuthorspyskintone4 __attribute__((swift_name("sleuthorspyskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleuthorspyskintone5 __attribute__((swift_name("sleuthorspyskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleuthorspyskintone6 __attribute__((swift_name("sleuthorspyskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mandancingskintone2 __attribute__((swift_name("mandancingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mandancingskintone3 __attribute__((swift_name("mandancingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mandancingskintone4 __attribute__((swift_name("mandancingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mandancingskintone5 __attribute__((swift_name("mandancingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mandancingskintone6 __attribute__((swift_name("mandancingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandwithfingerssplayedskintone2 __attribute__((swift_name("raisedhandwithfingerssplayedskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandwithfingerssplayedskintone3 __attribute__((swift_name("raisedhandwithfingerssplayedskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandwithfingerssplayedskintone4 __attribute__((swift_name("raisedhandwithfingerssplayedskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandwithfingerssplayedskintone5 __attribute__((swift_name("raisedhandwithfingerssplayedskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandwithfingerssplayedskintone6 __attribute__((swift_name("raisedhandwithfingerssplayedskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *middlefingerskintone2 __attribute__((swift_name("middlefingerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *middlefingerskintone3 __attribute__((swift_name("middlefingerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *middlefingerskintone4 __attribute__((swift_name("middlefingerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *middlefingerskintone5 __attribute__((swift_name("middlefingerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *middlefingerskintone6 __attribute__((swift_name("middlefingerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *spockhandskintone2 __attribute__((swift_name("spockhandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *spockhandskintone3 __attribute__((swift_name("spockhandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *spockhandskintone4 __attribute__((swift_name("spockhandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *spockhandskintone5 __attribute__((swift_name("spockhandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *spockhandskintone6 __attribute__((swift_name("spockhandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingnoskintone2 __attribute__((swift_name("womangesturingnoskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingnoskintone3 __attribute__((swift_name("womangesturingnoskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingnoskintone4 __attribute__((swift_name("womangesturingnoskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingnoskintone5 __attribute__((swift_name("womangesturingnoskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingnoskintone6 __attribute__((swift_name("womangesturingnoskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingnoskintone2 __attribute__((swift_name("mangesturingnoskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingnoskintone3 __attribute__((swift_name("mangesturingnoskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingnoskintone4 __attribute__((swift_name("mangesturingnoskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingnoskintone5 __attribute__((swift_name("mangesturingnoskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingnoskintone6 __attribute__((swift_name("mangesturingnoskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nogoodskintone2 __attribute__((swift_name("nogoodskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nogoodskintone3 __attribute__((swift_name("nogoodskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nogoodskintone4 __attribute__((swift_name("nogoodskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nogoodskintone5 __attribute__((swift_name("nogoodskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *nogoodskintone6 __attribute__((swift_name("nogoodskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingokskintone2 __attribute__((swift_name("womangesturingokskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingokskintone3 __attribute__((swift_name("womangesturingokskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingokskintone4 __attribute__((swift_name("womangesturingokskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingokskintone5 __attribute__((swift_name("womangesturingokskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womangesturingokskintone6 __attribute__((swift_name("womangesturingokskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingokskintone2 __attribute__((swift_name("mangesturingokskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingokskintone3 __attribute__((swift_name("mangesturingokskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingokskintone4 __attribute__((swift_name("mangesturingokskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingokskintone5 __attribute__((swift_name("mangesturingokskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mangesturingokskintone6 __attribute__((swift_name("mangesturingokskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okwomanskintone2 __attribute__((swift_name("okwomanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okwomanskintone3 __attribute__((swift_name("okwomanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okwomanskintone4 __attribute__((swift_name("okwomanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okwomanskintone5 __attribute__((swift_name("okwomanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *okwomanskintone6 __attribute__((swift_name("okwomanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbowingskintone2 __attribute__((swift_name("womanbowingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbowingskintone3 __attribute__((swift_name("womanbowingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbowingskintone4 __attribute__((swift_name("womanbowingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbowingskintone5 __attribute__((swift_name("womanbowingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbowingskintone6 __attribute__((swift_name("womanbowingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbowingskintone2 __attribute__((swift_name("manbowingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbowingskintone3 __attribute__((swift_name("manbowingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbowingskintone4 __attribute__((swift_name("manbowingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbowingskintone5 __attribute__((swift_name("manbowingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbowingskintone6 __attribute__((swift_name("manbowingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bowskintone2 __attribute__((swift_name("bowskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bowskintone3 __attribute__((swift_name("bowskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bowskintone4 __attribute__((swift_name("bowskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bowskintone5 __attribute__((swift_name("bowskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bowskintone6 __attribute__((swift_name("bowskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanraisinghandskintone2 __attribute__((swift_name("womanraisinghandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanraisinghandskintone3 __attribute__((swift_name("womanraisinghandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanraisinghandskintone4 __attribute__((swift_name("womanraisinghandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanraisinghandskintone5 __attribute__((swift_name("womanraisinghandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanraisinghandskintone6 __attribute__((swift_name("womanraisinghandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manraisinghandskintone2 __attribute__((swift_name("manraisinghandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manraisinghandskintone3 __attribute__((swift_name("manraisinghandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manraisinghandskintone4 __attribute__((swift_name("manraisinghandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manraisinghandskintone5 __attribute__((swift_name("manraisinghandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manraisinghandskintone6 __attribute__((swift_name("manraisinghandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisinghandskintone2 __attribute__((swift_name("raisinghandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisinghandskintone3 __attribute__((swift_name("raisinghandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisinghandskintone4 __attribute__((swift_name("raisinghandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisinghandskintone5 __attribute__((swift_name("raisinghandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisinghandskintone6 __attribute__((swift_name("raisinghandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandsskintone2 __attribute__((swift_name("raisedhandsskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandsskintone3 __attribute__((swift_name("raisedhandsskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandsskintone4 __attribute__((swift_name("raisedhandsskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandsskintone5 __attribute__((swift_name("raisedhandsskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedhandsskintone6 __attribute__((swift_name("raisedhandsskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfrowningskintone2 __attribute__((swift_name("womanfrowningskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfrowningskintone3 __attribute__((swift_name("womanfrowningskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfrowningskintone4 __attribute__((swift_name("womanfrowningskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfrowningskintone5 __attribute__((swift_name("womanfrowningskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfrowningskintone6 __attribute__((swift_name("womanfrowningskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfrowningskintone2 __attribute__((swift_name("manfrowningskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfrowningskintone3 __attribute__((swift_name("manfrowningskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfrowningskintone4 __attribute__((swift_name("manfrowningskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfrowningskintone5 __attribute__((swift_name("manfrowningskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfrowningskintone6 __attribute__((swift_name("manfrowningskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personfrowningskintone2 __attribute__((swift_name("personfrowningskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personfrowningskintone3 __attribute__((swift_name("personfrowningskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personfrowningskintone4 __attribute__((swift_name("personfrowningskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personfrowningskintone5 __attribute__((swift_name("personfrowningskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personfrowningskintone6 __attribute__((swift_name("personfrowningskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanpoutingskintone2 __attribute__((swift_name("womanpoutingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanpoutingskintone3 __attribute__((swift_name("womanpoutingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanpoutingskintone4 __attribute__((swift_name("womanpoutingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanpoutingskintone5 __attribute__((swift_name("womanpoutingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanpoutingskintone6 __attribute__((swift_name("womanpoutingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manpoutingskintone2 __attribute__((swift_name("manpoutingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manpoutingskintone3 __attribute__((swift_name("manpoutingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manpoutingskintone4 __attribute__((swift_name("manpoutingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manpoutingskintone5 __attribute__((swift_name("manpoutingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manpoutingskintone6 __attribute__((swift_name("manpoutingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithpoutingfaceskintone2 __attribute__((swift_name("personwithpoutingfaceskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithpoutingfaceskintone3 __attribute__((swift_name("personwithpoutingfaceskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithpoutingfaceskintone4 __attribute__((swift_name("personwithpoutingfaceskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithpoutingfaceskintone5 __attribute__((swift_name("personwithpoutingfaceskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithpoutingfaceskintone6 __attribute__((swift_name("personwithpoutingfaceskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *prayskintone2 __attribute__((swift_name("prayskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *prayskintone3 __attribute__((swift_name("prayskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *prayskintone4 __attribute__((swift_name("prayskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *prayskintone5 __attribute__((swift_name("prayskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *prayskintone6 __attribute__((swift_name("prayskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrowingboatskintone2 __attribute__((swift_name("womanrowingboatskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrowingboatskintone3 __attribute__((swift_name("womanrowingboatskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrowingboatskintone4 __attribute__((swift_name("womanrowingboatskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrowingboatskintone5 __attribute__((swift_name("womanrowingboatskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanrowingboatskintone6 __attribute__((swift_name("womanrowingboatskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrowingboatskintone2 __attribute__((swift_name("manrowingboatskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrowingboatskintone3 __attribute__((swift_name("manrowingboatskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrowingboatskintone4 __attribute__((swift_name("manrowingboatskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrowingboatskintone5 __attribute__((swift_name("manrowingboatskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manrowingboatskintone6 __attribute__((swift_name("manrowingboatskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rowboatskintone2 __attribute__((swift_name("rowboatskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rowboatskintone3 __attribute__((swift_name("rowboatskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rowboatskintone4 __attribute__((swift_name("rowboatskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rowboatskintone5 __attribute__((swift_name("rowboatskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rowboatskintone6 __attribute__((swift_name("rowboatskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbikingskintone2 __attribute__((swift_name("womanbikingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbikingskintone3 __attribute__((swift_name("womanbikingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbikingskintone4 __attribute__((swift_name("womanbikingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbikingskintone5 __attribute__((swift_name("womanbikingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbikingskintone6 __attribute__((swift_name("womanbikingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbikingskintone2 __attribute__((swift_name("manbikingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbikingskintone3 __attribute__((swift_name("manbikingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbikingskintone4 __attribute__((swift_name("manbikingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbikingskintone5 __attribute__((swift_name("manbikingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbikingskintone6 __attribute__((swift_name("manbikingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bicyclistskintone2 __attribute__((swift_name("bicyclistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bicyclistskintone3 __attribute__((swift_name("bicyclistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bicyclistskintone4 __attribute__((swift_name("bicyclistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bicyclistskintone5 __attribute__((swift_name("bicyclistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bicyclistskintone6 __attribute__((swift_name("bicyclistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanmountainbikingskintone2 __attribute__((swift_name("womanmountainbikingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanmountainbikingskintone3 __attribute__((swift_name("womanmountainbikingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanmountainbikingskintone4 __attribute__((swift_name("womanmountainbikingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanmountainbikingskintone5 __attribute__((swift_name("womanmountainbikingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanmountainbikingskintone6 __attribute__((swift_name("womanmountainbikingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manmountainbikingskintone2 __attribute__((swift_name("manmountainbikingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manmountainbikingskintone3 __attribute__((swift_name("manmountainbikingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manmountainbikingskintone4 __attribute__((swift_name("manmountainbikingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manmountainbikingskintone5 __attribute__((swift_name("manmountainbikingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manmountainbikingskintone6 __attribute__((swift_name("manmountainbikingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mountainbicyclistskintone2 __attribute__((swift_name("mountainbicyclistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mountainbicyclistskintone3 __attribute__((swift_name("mountainbicyclistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mountainbicyclistskintone4 __attribute__((swift_name("mountainbicyclistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mountainbicyclistskintone5 __attribute__((swift_name("mountainbicyclistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mountainbicyclistskintone6 __attribute__((swift_name("mountainbicyclistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwalkingskintone2 __attribute__((swift_name("womanwalkingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwalkingskintone3 __attribute__((swift_name("womanwalkingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwalkingskintone4 __attribute__((swift_name("womanwalkingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwalkingskintone5 __attribute__((swift_name("womanwalkingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanwalkingskintone6 __attribute__((swift_name("womanwalkingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwalkingskintone2 __attribute__((swift_name("manwalkingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwalkingskintone3 __attribute__((swift_name("manwalkingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwalkingskintone4 __attribute__((swift_name("manwalkingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwalkingskintone5 __attribute__((swift_name("manwalkingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manwalkingskintone6 __attribute__((swift_name("manwalkingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *walkingskintone2 __attribute__((swift_name("walkingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *walkingskintone3 __attribute__((swift_name("walkingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *walkingskintone4 __attribute__((swift_name("walkingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *walkingskintone5 __attribute__((swift_name("walkingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *walkingskintone6 __attribute__((swift_name("walkingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bathskintone2 __attribute__((swift_name("bathskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bathskintone3 __attribute__((swift_name("bathskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bathskintone4 __attribute__((swift_name("bathskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bathskintone5 __attribute__((swift_name("bathskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *bathskintone6 __attribute__((swift_name("bathskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleepingaccommodationskintone2 __attribute__((swift_name("sleepingaccommodationskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleepingaccommodationskintone3 __attribute__((swift_name("sleepingaccommodationskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleepingaccommodationskintone4 __attribute__((swift_name("sleepingaccommodationskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleepingaccommodationskintone5 __attribute__((swift_name("sleepingaccommodationskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *sleepingaccommodationskintone6 __attribute__((swift_name("sleepingaccommodationskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pinchinghandskintone2 __attribute__((swift_name("pinchinghandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pinchinghandskintone3 __attribute__((swift_name("pinchinghandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pinchinghandskintone4 __attribute__((swift_name("pinchinghandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pinchinghandskintone5 __attribute__((swift_name("pinchinghandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pinchinghandskintone6 __attribute__((swift_name("pinchinghandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *thehornsskintone2 __attribute__((swift_name("thehornsskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *thehornsskintone3 __attribute__((swift_name("thehornsskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *thehornsskintone4 __attribute__((swift_name("thehornsskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *thehornsskintone5 __attribute__((swift_name("thehornsskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *thehornsskintone6 __attribute__((swift_name("thehornsskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *callmehandskintone2 __attribute__((swift_name("callmehandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *callmehandskintone3 __attribute__((swift_name("callmehandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *callmehandskintone4 __attribute__((swift_name("callmehandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *callmehandskintone5 __attribute__((swift_name("callmehandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *callmehandskintone6 __attribute__((swift_name("callmehandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedbackofhandskintone2 __attribute__((swift_name("raisedbackofhandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedbackofhandskintone3 __attribute__((swift_name("raisedbackofhandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedbackofhandskintone4 __attribute__((swift_name("raisedbackofhandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedbackofhandskintone5 __attribute__((swift_name("raisedbackofhandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *raisedbackofhandskintone6 __attribute__((swift_name("raisedbackofhandskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *leftfacingfistskintone2 __attribute__((swift_name("leftfacingfistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *leftfacingfistskintone3 __attribute__((swift_name("leftfacingfistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *leftfacingfistskintone4 __attribute__((swift_name("leftfacingfistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *leftfacingfistskintone5 __attribute__((swift_name("leftfacingfistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *leftfacingfistskintone6 __attribute__((swift_name("leftfacingfistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rightfacingfistskintone2 __attribute__((swift_name("rightfacingfistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rightfacingfistskintone3 __attribute__((swift_name("rightfacingfistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rightfacingfistskintone4 __attribute__((swift_name("rightfacingfistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rightfacingfistskintone5 __attribute__((swift_name("rightfacingfistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *rightfacingfistskintone6 __attribute__((swift_name("rightfacingfistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *crossedfingersskintone2 __attribute__((swift_name("crossedfingersskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *crossedfingersskintone3 __attribute__((swift_name("crossedfingersskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *crossedfingersskintone4 __attribute__((swift_name("crossedfingersskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *crossedfingersskintone5 __attribute__((swift_name("crossedfingersskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *crossedfingersskintone6 __attribute__((swift_name("crossedfingersskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *iloveyouhandsignskintone2 __attribute__((swift_name("iloveyouhandsignskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *iloveyouhandsignskintone3 __attribute__((swift_name("iloveyouhandsignskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *iloveyouhandsignskintone4 __attribute__((swift_name("iloveyouhandsignskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *iloveyouhandsignskintone5 __attribute__((swift_name("iloveyouhandsignskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *iloveyouhandsignskintone6 __attribute__((swift_name("iloveyouhandsignskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfacepalmingskintone2 __attribute__((swift_name("womanfacepalmingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfacepalmingskintone3 __attribute__((swift_name("womanfacepalmingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfacepalmingskintone4 __attribute__((swift_name("womanfacepalmingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfacepalmingskintone5 __attribute__((swift_name("womanfacepalmingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanfacepalmingskintone6 __attribute__((swift_name("womanfacepalmingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfacepalmingskintone2 __attribute__((swift_name("manfacepalmingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfacepalmingskintone3 __attribute__((swift_name("manfacepalmingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfacepalmingskintone4 __attribute__((swift_name("manfacepalmingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfacepalmingskintone5 __attribute__((swift_name("manfacepalmingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manfacepalmingskintone6 __attribute__((swift_name("manfacepalmingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepalmskintone2 __attribute__((swift_name("facepalmskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepalmskintone3 __attribute__((swift_name("facepalmskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepalmskintone4 __attribute__((swift_name("facepalmskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepalmskintone5 __attribute__((swift_name("facepalmskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *facepalmskintone6 __attribute__((swift_name("facepalmskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pregnantwomanskintone2 __attribute__((swift_name("pregnantwomanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pregnantwomanskintone3 __attribute__((swift_name("pregnantwomanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pregnantwomanskintone4 __attribute__((swift_name("pregnantwomanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pregnantwomanskintone5 __attribute__((swift_name("pregnantwomanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pregnantwomanskintone6 __attribute__((swift_name("pregnantwomanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *breastfeedingskintone2 __attribute__((swift_name("breastfeedingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *breastfeedingskintone3 __attribute__((swift_name("breastfeedingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *breastfeedingskintone4 __attribute__((swift_name("breastfeedingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *breastfeedingskintone5 __attribute__((swift_name("breastfeedingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *breastfeedingskintone6 __attribute__((swift_name("breastfeedingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *palmsuptogetherskintone2 __attribute__((swift_name("palmsuptogetherskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *palmsuptogetherskintone3 __attribute__((swift_name("palmsuptogetherskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *palmsuptogetherskintone4 __attribute__((swift_name("palmsuptogetherskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *palmsuptogetherskintone5 __attribute__((swift_name("palmsuptogetherskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *palmsuptogetherskintone6 __attribute__((swift_name("palmsuptogetherskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *selfieskintone2 __attribute__((swift_name("selfieskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *selfieskintone3 __attribute__((swift_name("selfieskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *selfieskintone4 __attribute__((swift_name("selfieskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *selfieskintone5 __attribute__((swift_name("selfieskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *selfieskintone6 __attribute__((swift_name("selfieskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princeskintone2 __attribute__((swift_name("princeskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princeskintone3 __attribute__((swift_name("princeskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princeskintone4 __attribute__((swift_name("princeskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princeskintone5 __attribute__((swift_name("princeskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *princeskintone6 __attribute__((swift_name("princeskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manintuxedoskintone2 __attribute__((swift_name("manintuxedoskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manintuxedoskintone3 __attribute__((swift_name("manintuxedoskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manintuxedoskintone4 __attribute__((swift_name("manintuxedoskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manintuxedoskintone5 __attribute__((swift_name("manintuxedoskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manintuxedoskintone6 __attribute__((swift_name("manintuxedoskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mrsclausskintone2 __attribute__((swift_name("mrsclausskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mrsclausskintone3 __attribute__((swift_name("mrsclausskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mrsclausskintone4 __attribute__((swift_name("mrsclausskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mrsclausskintone5 __attribute__((swift_name("mrsclausskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mrsclausskintone6 __attribute__((swift_name("mrsclausskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanshruggingskintone2 __attribute__((swift_name("womanshruggingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanshruggingskintone3 __attribute__((swift_name("womanshruggingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanshruggingskintone4 __attribute__((swift_name("womanshruggingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanshruggingskintone5 __attribute__((swift_name("womanshruggingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanshruggingskintone6 __attribute__((swift_name("womanshruggingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manshruggingskintone2 __attribute__((swift_name("manshruggingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manshruggingskintone3 __attribute__((swift_name("manshruggingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manshruggingskintone4 __attribute__((swift_name("manshruggingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manshruggingskintone5 __attribute__((swift_name("manshruggingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manshruggingskintone6 __attribute__((swift_name("manshruggingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *shrugskintone2 __attribute__((swift_name("shrugskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *shrugskintone3 __attribute__((swift_name("shrugskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *shrugskintone4 __attribute__((swift_name("shrugskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *shrugskintone5 __attribute__((swift_name("shrugskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *shrugskintone6 __attribute__((swift_name("shrugskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womancartwheelingskintone2 __attribute__((swift_name("womancartwheelingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womancartwheelingskintone3 __attribute__((swift_name("womancartwheelingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womancartwheelingskintone4 __attribute__((swift_name("womancartwheelingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womancartwheelingskintone5 __attribute__((swift_name("womancartwheelingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womancartwheelingskintone6 __attribute__((swift_name("womancartwheelingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mancartwheelingskintone2 __attribute__((swift_name("mancartwheelingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mancartwheelingskintone3 __attribute__((swift_name("mancartwheelingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mancartwheelingskintone4 __attribute__((swift_name("mancartwheelingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mancartwheelingskintone5 __attribute__((swift_name("mancartwheelingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mancartwheelingskintone6 __attribute__((swift_name("mancartwheelingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *persondoingcartwheelskintone2 __attribute__((swift_name("persondoingcartwheelskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *persondoingcartwheelskintone3 __attribute__((swift_name("persondoingcartwheelskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *persondoingcartwheelskintone4 __attribute__((swift_name("persondoingcartwheelskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *persondoingcartwheelskintone5 __attribute__((swift_name("persondoingcartwheelskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *persondoingcartwheelskintone6 __attribute__((swift_name("persondoingcartwheelskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanjugglingskintone2 __attribute__((swift_name("womanjugglingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanjugglingskintone3 __attribute__((swift_name("womanjugglingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanjugglingskintone4 __attribute__((swift_name("womanjugglingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanjugglingskintone5 __attribute__((swift_name("womanjugglingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanjugglingskintone6 __attribute__((swift_name("womanjugglingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manjugglingskintone2 __attribute__((swift_name("manjugglingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manjugglingskintone3 __attribute__((swift_name("manjugglingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manjugglingskintone4 __attribute__((swift_name("manjugglingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manjugglingskintone5 __attribute__((swift_name("manjugglingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manjugglingskintone6 __attribute__((swift_name("manjugglingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *jugglingskintone2 __attribute__((swift_name("jugglingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *jugglingskintone3 __attribute__((swift_name("jugglingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *jugglingskintone4 __attribute__((swift_name("jugglingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *jugglingskintone5 __attribute__((swift_name("jugglingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *jugglingskintone6 __attribute__((swift_name("jugglingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayingwaterpoloskintone2 __attribute__((swift_name("womanplayingwaterpoloskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayingwaterpoloskintone3 __attribute__((swift_name("womanplayingwaterpoloskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayingwaterpoloskintone4 __attribute__((swift_name("womanplayingwaterpoloskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayingwaterpoloskintone5 __attribute__((swift_name("womanplayingwaterpoloskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayingwaterpoloskintone6 __attribute__((swift_name("womanplayingwaterpoloskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayingwaterpoloskintone2 __attribute__((swift_name("manplayingwaterpoloskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayingwaterpoloskintone3 __attribute__((swift_name("manplayingwaterpoloskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayingwaterpoloskintone4 __attribute__((swift_name("manplayingwaterpoloskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayingwaterpoloskintone5 __attribute__((swift_name("manplayingwaterpoloskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayingwaterpoloskintone6 __attribute__((swift_name("manplayingwaterpoloskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waterpoloskintone2 __attribute__((swift_name("waterpoloskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waterpoloskintone3 __attribute__((swift_name("waterpoloskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waterpoloskintone4 __attribute__((swift_name("waterpoloskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waterpoloskintone5 __attribute__((swift_name("waterpoloskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *waterpoloskintone6 __attribute__((swift_name("waterpoloskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayinghandballskintone2 __attribute__((swift_name("womanplayinghandballskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayinghandballskintone3 __attribute__((swift_name("womanplayinghandballskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayinghandballskintone4 __attribute__((swift_name("womanplayinghandballskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayinghandballskintone5 __attribute__((swift_name("womanplayinghandballskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanplayinghandballskintone6 __attribute__((swift_name("womanplayinghandballskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayinghandballskintone2 __attribute__((swift_name("manplayinghandballskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayinghandballskintone3 __attribute__((swift_name("manplayinghandballskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayinghandballskintone4 __attribute__((swift_name("manplayinghandballskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayinghandballskintone5 __attribute__((swift_name("manplayinghandballskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manplayinghandballskintone6 __attribute__((swift_name("manplayinghandballskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handballskintone2 __attribute__((swift_name("handballskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handballskintone3 __attribute__((swift_name("handballskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handballskintone4 __attribute__((swift_name("handballskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handballskintone5 __attribute__((swift_name("handballskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handballskintone6 __attribute__((swift_name("handballskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *legskintone2 __attribute__((swift_name("legskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *legskintone3 __attribute__((swift_name("legskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *legskintone4 __attribute__((swift_name("legskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *legskintone5 __attribute__((swift_name("legskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *legskintone6 __attribute__((swift_name("legskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *footskintone2 __attribute__((swift_name("footskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *footskintone3 __attribute__((swift_name("footskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *footskintone4 __attribute__((swift_name("footskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *footskintone5 __attribute__((swift_name("footskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *footskintone6 __attribute__((swift_name("footskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesuperheroskintone2 __attribute__((swift_name("femalesuperheroskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesuperheroskintone3 __attribute__((swift_name("femalesuperheroskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesuperheroskintone4 __attribute__((swift_name("femalesuperheroskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesuperheroskintone5 __attribute__((swift_name("femalesuperheroskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesuperheroskintone6 __attribute__((swift_name("femalesuperheroskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesuperheroskintone2 __attribute__((swift_name("malesuperheroskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesuperheroskintone3 __attribute__((swift_name("malesuperheroskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesuperheroskintone4 __attribute__((swift_name("malesuperheroskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesuperheroskintone5 __attribute__((swift_name("malesuperheroskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesuperheroskintone6 __attribute__((swift_name("malesuperheroskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *superheroskintone2 __attribute__((swift_name("superheroskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *superheroskintone3 __attribute__((swift_name("superheroskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *superheroskintone4 __attribute__((swift_name("superheroskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *superheroskintone5 __attribute__((swift_name("superheroskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *superheroskintone6 __attribute__((swift_name("superheroskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesupervillainskintone2 __attribute__((swift_name("femalesupervillainskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesupervillainskintone3 __attribute__((swift_name("femalesupervillainskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesupervillainskintone4 __attribute__((swift_name("femalesupervillainskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesupervillainskintone5 __attribute__((swift_name("femalesupervillainskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalesupervillainskintone6 __attribute__((swift_name("femalesupervillainskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesupervillainskintone2 __attribute__((swift_name("malesupervillainskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesupervillainskintone3 __attribute__((swift_name("malesupervillainskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesupervillainskintone4 __attribute__((swift_name("malesupervillainskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesupervillainskintone5 __attribute__((swift_name("malesupervillainskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malesupervillainskintone6 __attribute__((swift_name("malesupervillainskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *supervillainskintone2 __attribute__((swift_name("supervillainskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *supervillainskintone3 __attribute__((swift_name("supervillainskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *supervillainskintone4 __attribute__((swift_name("supervillainskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *supervillainskintone5 __attribute__((swift_name("supervillainskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *supervillainskintone6 __attribute__((swift_name("supervillainskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earwithhearingaidskintone2 __attribute__((swift_name("earwithhearingaidskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earwithhearingaidskintone3 __attribute__((swift_name("earwithhearingaidskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earwithhearingaidskintone4 __attribute__((swift_name("earwithhearingaidskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earwithhearingaidskintone5 __attribute__((swift_name("earwithhearingaidskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *earwithhearingaidskintone6 __attribute__((swift_name("earwithhearingaidskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanstandingskintone2 __attribute__((swift_name("womanstandingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanstandingskintone3 __attribute__((swift_name("womanstandingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanstandingskintone4 __attribute__((swift_name("womanstandingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanstandingskintone5 __attribute__((swift_name("womanstandingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanstandingskintone6 __attribute__((swift_name("womanstandingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manstandingskintone2 __attribute__((swift_name("manstandingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manstandingskintone3 __attribute__((swift_name("manstandingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manstandingskintone4 __attribute__((swift_name("manstandingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manstandingskintone5 __attribute__((swift_name("manstandingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manstandingskintone6 __attribute__((swift_name("manstandingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *standingpersonskintone2 __attribute__((swift_name("standingpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *standingpersonskintone3 __attribute__((swift_name("standingpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *standingpersonskintone4 __attribute__((swift_name("standingpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *standingpersonskintone5 __attribute__((swift_name("standingpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *standingpersonskintone6 __attribute__((swift_name("standingpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womankneelingskintone2 __attribute__((swift_name("womankneelingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womankneelingskintone3 __attribute__((swift_name("womankneelingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womankneelingskintone4 __attribute__((swift_name("womankneelingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womankneelingskintone5 __attribute__((swift_name("womankneelingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womankneelingskintone6 __attribute__((swift_name("womankneelingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mankneelingskintone2 __attribute__((swift_name("mankneelingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mankneelingskintone3 __attribute__((swift_name("mankneelingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mankneelingskintone4 __attribute__((swift_name("mankneelingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mankneelingskintone5 __attribute__((swift_name("mankneelingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mankneelingskintone6 __attribute__((swift_name("mankneelingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *kneelingpersonskintone2 __attribute__((swift_name("kneelingpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *kneelingpersonskintone3 __attribute__((swift_name("kneelingpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *kneelingpersonskintone4 __attribute__((swift_name("kneelingpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *kneelingpersonskintone5 __attribute__((swift_name("kneelingpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *kneelingpersonskintone6 __attribute__((swift_name("kneelingpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafwomanskintone2 __attribute__((swift_name("deafwomanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafwomanskintone3 __attribute__((swift_name("deafwomanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafwomanskintone4 __attribute__((swift_name("deafwomanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafwomanskintone5 __attribute__((swift_name("deafwomanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafwomanskintone6 __attribute__((swift_name("deafwomanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafmanskintone2 __attribute__((swift_name("deafmanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafmanskintone3 __attribute__((swift_name("deafmanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafmanskintone4 __attribute__((swift_name("deafmanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafmanskintone5 __attribute__((swift_name("deafmanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafmanskintone6 __attribute__((swift_name("deafmanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafpersonskintone2 __attribute__((swift_name("deafpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafpersonskintone3 __attribute__((swift_name("deafpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafpersonskintone4 __attribute__((swift_name("deafpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafpersonskintone5 __attribute__((swift_name("deafpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *deafpersonskintone6 __attribute__((swift_name("deafpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *farmerskintone2 __attribute__((swift_name("farmerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *farmerskintone3 __attribute__((swift_name("farmerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *farmerskintone4 __attribute__((swift_name("farmerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *farmerskintone5 __attribute__((swift_name("farmerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *farmerskintone6 __attribute__((swift_name("farmerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *cookskintone2 __attribute__((swift_name("cookskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *cookskintone3 __attribute__((swift_name("cookskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *cookskintone4 __attribute__((swift_name("cookskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *cookskintone5 __attribute__((swift_name("cookskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *cookskintone6 __attribute__((swift_name("cookskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *studentskintone2 __attribute__((swift_name("studentskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *studentskintone3 __attribute__((swift_name("studentskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *studentskintone4 __attribute__((swift_name("studentskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *studentskintone5 __attribute__((swift_name("studentskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *studentskintone6 __attribute__((swift_name("studentskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *singerskintone2 __attribute__((swift_name("singerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *singerskintone3 __attribute__((swift_name("singerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *singerskintone4 __attribute__((swift_name("singerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *singerskintone5 __attribute__((swift_name("singerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *singerskintone6 __attribute__((swift_name("singerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *artistskintone2 __attribute__((swift_name("artistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *artistskintone3 __attribute__((swift_name("artistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *artistskintone4 __attribute__((swift_name("artistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *artistskintone5 __attribute__((swift_name("artistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *artistskintone6 __attribute__((swift_name("artistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *teacherskintone2 __attribute__((swift_name("teacherskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *teacherskintone3 __attribute__((swift_name("teacherskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *teacherskintone4 __attribute__((swift_name("teacherskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *teacherskintone5 __attribute__((swift_name("teacherskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *teacherskintone6 __attribute__((swift_name("teacherskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *factoryworkerskintone2 __attribute__((swift_name("factoryworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *factoryworkerskintone3 __attribute__((swift_name("factoryworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *factoryworkerskintone4 __attribute__((swift_name("factoryworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *factoryworkerskintone5 __attribute__((swift_name("factoryworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *factoryworkerskintone6 __attribute__((swift_name("factoryworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *technologistskintone2 __attribute__((swift_name("technologistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *technologistskintone3 __attribute__((swift_name("technologistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *technologistskintone4 __attribute__((swift_name("technologistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *technologistskintone5 __attribute__((swift_name("technologistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *technologistskintone6 __attribute__((swift_name("technologistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *officeworkerskintone2 __attribute__((swift_name("officeworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *officeworkerskintone3 __attribute__((swift_name("officeworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *officeworkerskintone4 __attribute__((swift_name("officeworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *officeworkerskintone5 __attribute__((swift_name("officeworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *officeworkerskintone6 __attribute__((swift_name("officeworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mechanicskintone2 __attribute__((swift_name("mechanicskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mechanicskintone3 __attribute__((swift_name("mechanicskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mechanicskintone4 __attribute__((swift_name("mechanicskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mechanicskintone5 __attribute__((swift_name("mechanicskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mechanicskintone6 __attribute__((swift_name("mechanicskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *scientistskintone2 __attribute__((swift_name("scientistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *scientistskintone3 __attribute__((swift_name("scientistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *scientistskintone4 __attribute__((swift_name("scientistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *scientistskintone5 __attribute__((swift_name("scientistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *scientistskintone6 __attribute__((swift_name("scientistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *astronautskintone2 __attribute__((swift_name("astronautskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *astronautskintone3 __attribute__((swift_name("astronautskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *astronautskintone4 __attribute__((swift_name("astronautskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *astronautskintone5 __attribute__((swift_name("astronautskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *astronautskintone6 __attribute__((swift_name("astronautskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *firefighterskintone2 __attribute__((swift_name("firefighterskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *firefighterskintone3 __attribute__((swift_name("firefighterskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *firefighterskintone4 __attribute__((swift_name("firefighterskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *firefighterskintone5 __attribute__((swift_name("firefighterskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *firefighterskintone6 __attribute__((swift_name("firefighterskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithprobingcaneskintone2 __attribute__((swift_name("personwithprobingcaneskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithprobingcaneskintone3 __attribute__((swift_name("personwithprobingcaneskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithprobingcaneskintone4 __attribute__((swift_name("personwithprobingcaneskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithprobingcaneskintone5 __attribute__((swift_name("personwithprobingcaneskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithprobingcaneskintone6 __attribute__((swift_name("personwithprobingcaneskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedpersonskintone2 __attribute__((swift_name("redhairedpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedpersonskintone3 __attribute__((swift_name("redhairedpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedpersonskintone4 __attribute__((swift_name("redhairedpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedpersonskintone5 __attribute__((swift_name("redhairedpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *redhairedpersonskintone6 __attribute__((swift_name("redhairedpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedpersonskintone2 __attribute__((swift_name("curlyhairedpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedpersonskintone3 __attribute__((swift_name("curlyhairedpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedpersonskintone4 __attribute__((swift_name("curlyhairedpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedpersonskintone5 __attribute__((swift_name("curlyhairedpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *curlyhairedpersonskintone6 __attribute__((swift_name("curlyhairedpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldpersonskintone2 __attribute__((swift_name("baldpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldpersonskintone3 __attribute__((swift_name("baldpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldpersonskintone4 __attribute__((swift_name("baldpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldpersonskintone5 __attribute__((swift_name("baldpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *baldpersonskintone6 __attribute__((swift_name("baldpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedpersonskintone2 __attribute__((swift_name("whitehairedpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedpersonskintone3 __attribute__((swift_name("whitehairedpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedpersonskintone4 __attribute__((swift_name("whitehairedpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedpersonskintone5 __attribute__((swift_name("whitehairedpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *whitehairedpersonskintone6 __attribute__((swift_name("whitehairedpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmotorizedwheelchairskintone2 __attribute__((swift_name("personinmotorizedwheelchairskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmotorizedwheelchairskintone3 __attribute__((swift_name("personinmotorizedwheelchairskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmotorizedwheelchairskintone4 __attribute__((swift_name("personinmotorizedwheelchairskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmotorizedwheelchairskintone5 __attribute__((swift_name("personinmotorizedwheelchairskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmotorizedwheelchairskintone6 __attribute__((swift_name("personinmotorizedwheelchairskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmanualwheelchairskintone2 __attribute__((swift_name("personinmanualwheelchairskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmanualwheelchairskintone3 __attribute__((swift_name("personinmanualwheelchairskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmanualwheelchairskintone4 __attribute__((swift_name("personinmanualwheelchairskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmanualwheelchairskintone5 __attribute__((swift_name("personinmanualwheelchairskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinmanualwheelchairskintone6 __attribute__((swift_name("personinmanualwheelchairskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *healthworkerskintone2 __attribute__((swift_name("healthworkerskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *healthworkerskintone3 __attribute__((swift_name("healthworkerskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *healthworkerskintone4 __attribute__((swift_name("healthworkerskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *healthworkerskintone5 __attribute__((swift_name("healthworkerskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *healthworkerskintone6 __attribute__((swift_name("healthworkerskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *judgeskintone2 __attribute__((swift_name("judgeskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *judgeskintone3 __attribute__((swift_name("judgeskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *judgeskintone4 __attribute__((swift_name("judgeskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *judgeskintone5 __attribute__((swift_name("judgeskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *judgeskintone6 __attribute__((swift_name("judgeskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pilotskintone2 __attribute__((swift_name("pilotskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pilotskintone3 __attribute__((swift_name("pilotskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pilotskintone4 __attribute__((swift_name("pilotskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pilotskintone5 __attribute__((swift_name("pilotskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pilotskintone6 __attribute__((swift_name("pilotskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *adultskintone2 __attribute__((swift_name("adultskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *adultskintone3 __attribute__((swift_name("adultskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *adultskintone4 __attribute__((swift_name("adultskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *adultskintone5 __attribute__((swift_name("adultskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *adultskintone6 __attribute__((swift_name("adultskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *childskintone2 __attribute__((swift_name("childskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *childskintone3 __attribute__((swift_name("childskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *childskintone4 __attribute__((swift_name("childskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *childskintone5 __attribute__((swift_name("childskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *childskintone6 __attribute__((swift_name("childskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderadultskintone2 __attribute__((swift_name("olderadultskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderadultskintone3 __attribute__((swift_name("olderadultskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderadultskintone4 __attribute__((swift_name("olderadultskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderadultskintone5 __attribute__((swift_name("olderadultskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *olderadultskintone6 __attribute__((swift_name("olderadultskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *beardedpersonskintone2 __attribute__((swift_name("beardedpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *beardedpersonskintone3 __attribute__((swift_name("beardedpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *beardedpersonskintone4 __attribute__((swift_name("beardedpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *beardedpersonskintone5 __attribute__((swift_name("beardedpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *beardedpersonskintone6 __attribute__((swift_name("beardedpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithheadscarfskintone2 __attribute__((swift_name("personwithheadscarfskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithheadscarfskintone3 __attribute__((swift_name("personwithheadscarfskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithheadscarfskintone4 __attribute__((swift_name("personwithheadscarfskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithheadscarfskintone5 __attribute__((swift_name("personwithheadscarfskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithheadscarfskintone6 __attribute__((swift_name("personwithheadscarfskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninsteamyroomskintone2 __attribute__((swift_name("womaninsteamyroomskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninsteamyroomskintone3 __attribute__((swift_name("womaninsteamyroomskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninsteamyroomskintone4 __attribute__((swift_name("womaninsteamyroomskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninsteamyroomskintone5 __attribute__((swift_name("womaninsteamyroomskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninsteamyroomskintone6 __attribute__((swift_name("womaninsteamyroomskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninsteamyroomskintone2 __attribute__((swift_name("maninsteamyroomskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninsteamyroomskintone3 __attribute__((swift_name("maninsteamyroomskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninsteamyroomskintone4 __attribute__((swift_name("maninsteamyroomskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninsteamyroomskintone5 __attribute__((swift_name("maninsteamyroomskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninsteamyroomskintone6 __attribute__((swift_name("maninsteamyroomskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinsteamyroomskintone2 __attribute__((swift_name("personinsteamyroomskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinsteamyroomskintone3 __attribute__((swift_name("personinsteamyroomskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinsteamyroomskintone4 __attribute__((swift_name("personinsteamyroomskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinsteamyroomskintone5 __attribute__((swift_name("personinsteamyroomskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinsteamyroomskintone6 __attribute__((swift_name("personinsteamyroomskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanclimbingskintone2 __attribute__((swift_name("womanclimbingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanclimbingskintone3 __attribute__((swift_name("womanclimbingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanclimbingskintone4 __attribute__((swift_name("womanclimbingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanclimbingskintone5 __attribute__((swift_name("womanclimbingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanclimbingskintone6 __attribute__((swift_name("womanclimbingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manclimbingskintone2 __attribute__((swift_name("manclimbingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manclimbingskintone3 __attribute__((swift_name("manclimbingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manclimbingskintone4 __attribute__((swift_name("manclimbingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manclimbingskintone5 __attribute__((swift_name("manclimbingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manclimbingskintone6 __attribute__((swift_name("manclimbingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personclimbingskintone2 __attribute__((swift_name("personclimbingskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personclimbingskintone3 __attribute__((swift_name("personclimbingskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personclimbingskintone4 __attribute__((swift_name("personclimbingskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personclimbingskintone5 __attribute__((swift_name("personclimbingskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personclimbingskintone6 __attribute__((swift_name("personclimbingskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninlotuspositionskintone2 __attribute__((swift_name("womaninlotuspositionskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninlotuspositionskintone3 __attribute__((swift_name("womaninlotuspositionskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninlotuspositionskintone4 __attribute__((swift_name("womaninlotuspositionskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninlotuspositionskintone5 __attribute__((swift_name("womaninlotuspositionskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womaninlotuspositionskintone6 __attribute__((swift_name("womaninlotuspositionskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninlotuspositionskintone2 __attribute__((swift_name("maninlotuspositionskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninlotuspositionskintone3 __attribute__((swift_name("maninlotuspositionskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninlotuspositionskintone4 __attribute__((swift_name("maninlotuspositionskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninlotuspositionskintone5 __attribute__((swift_name("maninlotuspositionskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maninlotuspositionskintone6 __attribute__((swift_name("maninlotuspositionskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinlotuspositionskintone2 __attribute__((swift_name("personinlotuspositionskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinlotuspositionskintone3 __attribute__((swift_name("personinlotuspositionskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinlotuspositionskintone4 __attribute__((swift_name("personinlotuspositionskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinlotuspositionskintone5 __attribute__((swift_name("personinlotuspositionskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personinlotuspositionskintone6 __attribute__((swift_name("personinlotuspositionskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemageskintone2 __attribute__((swift_name("femalemageskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemageskintone3 __attribute__((swift_name("femalemageskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemageskintone4 __attribute__((swift_name("femalemageskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemageskintone5 __attribute__((swift_name("femalemageskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalemageskintone6 __attribute__((swift_name("femalemageskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemageskintone2 __attribute__((swift_name("malemageskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemageskintone3 __attribute__((swift_name("malemageskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemageskintone4 __attribute__((swift_name("malemageskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemageskintone5 __attribute__((swift_name("malemageskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malemageskintone6 __attribute__((swift_name("malemageskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mageskintone2 __attribute__((swift_name("mageskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mageskintone3 __attribute__((swift_name("mageskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mageskintone4 __attribute__((swift_name("mageskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mageskintone5 __attribute__((swift_name("mageskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mageskintone6 __attribute__((swift_name("mageskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefairyskintone2 __attribute__((swift_name("femalefairyskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefairyskintone3 __attribute__((swift_name("femalefairyskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefairyskintone4 __attribute__((swift_name("femalefairyskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefairyskintone5 __attribute__((swift_name("femalefairyskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalefairyskintone6 __attribute__((swift_name("femalefairyskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefairyskintone2 __attribute__((swift_name("malefairyskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefairyskintone3 __attribute__((swift_name("malefairyskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefairyskintone4 __attribute__((swift_name("malefairyskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefairyskintone5 __attribute__((swift_name("malefairyskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malefairyskintone6 __attribute__((swift_name("malefairyskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fairyskintone2 __attribute__((swift_name("fairyskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fairyskintone3 __attribute__((swift_name("fairyskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fairyskintone4 __attribute__((swift_name("fairyskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fairyskintone5 __attribute__((swift_name("fairyskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fairyskintone6 __attribute__((swift_name("fairyskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalevampireskintone2 __attribute__((swift_name("femalevampireskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalevampireskintone3 __attribute__((swift_name("femalevampireskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalevampireskintone4 __attribute__((swift_name("femalevampireskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalevampireskintone5 __attribute__((swift_name("femalevampireskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femalevampireskintone6 __attribute__((swift_name("femalevampireskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malevampireskintone2 __attribute__((swift_name("malevampireskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malevampireskintone3 __attribute__((swift_name("malevampireskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malevampireskintone4 __attribute__((swift_name("malevampireskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malevampireskintone5 __attribute__((swift_name("malevampireskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *malevampireskintone6 __attribute__((swift_name("malevampireskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vampireskintone2 __attribute__((swift_name("vampireskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vampireskintone3 __attribute__((swift_name("vampireskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vampireskintone4 __attribute__((swift_name("vampireskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vampireskintone5 __attribute__((swift_name("vampireskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vampireskintone6 __attribute__((swift_name("vampireskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermaidskintone2 __attribute__((swift_name("mermaidskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermaidskintone3 __attribute__((swift_name("mermaidskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermaidskintone4 __attribute__((swift_name("mermaidskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermaidskintone5 __attribute__((swift_name("mermaidskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermaidskintone6 __attribute__((swift_name("mermaidskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermanskintone2 __attribute__((swift_name("mermanskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermanskintone3 __attribute__((swift_name("mermanskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermanskintone4 __attribute__((swift_name("mermanskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermanskintone5 __attribute__((swift_name("mermanskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *mermanskintone6 __attribute__((swift_name("mermanskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *merpersonskintone2 __attribute__((swift_name("merpersonskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *merpersonskintone3 __attribute__((swift_name("merpersonskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *merpersonskintone4 __attribute__((swift_name("merpersonskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *merpersonskintone5 __attribute__((swift_name("merpersonskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *merpersonskintone6 __attribute__((swift_name("merpersonskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleelfskintone2 __attribute__((swift_name("femaleelfskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleelfskintone3 __attribute__((swift_name("femaleelfskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleelfskintone4 __attribute__((swift_name("femaleelfskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleelfskintone5 __attribute__((swift_name("femaleelfskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *femaleelfskintone6 __attribute__((swift_name("femaleelfskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleelfskintone2 __attribute__((swift_name("maleelfskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleelfskintone3 __attribute__((swift_name("maleelfskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleelfskintone4 __attribute__((swift_name("maleelfskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleelfskintone5 __attribute__((swift_name("maleelfskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *maleelfskintone6 __attribute__((swift_name("maleelfskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *elfskintone2 __attribute__((swift_name("elfskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *elfskintone3 __attribute__((swift_name("elfskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *elfskintone4 __attribute__((swift_name("elfskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *elfskintone5 __attribute__((swift_name("elfskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *elfskintone6 __attribute__((swift_name("elfskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointupskintone2 __attribute__((swift_name("pointupskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointupskintone3 __attribute__((swift_name("pointupskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointupskintone4 __attribute__((swift_name("pointupskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointupskintone5 __attribute__((swift_name("pointupskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *pointupskintone6 __attribute__((swift_name("pointupskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbouncingballskintone2 __attribute__((swift_name("womanbouncingballskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbouncingballskintone3 __attribute__((swift_name("womanbouncingballskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbouncingballskintone4 __attribute__((swift_name("womanbouncingballskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbouncingballskintone5 __attribute__((swift_name("womanbouncingballskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *womanbouncingballskintone6 __attribute__((swift_name("womanbouncingballskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbouncingballskintone2 __attribute__((swift_name("manbouncingballskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbouncingballskintone3 __attribute__((swift_name("manbouncingballskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbouncingballskintone4 __attribute__((swift_name("manbouncingballskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbouncingballskintone5 __attribute__((swift_name("manbouncingballskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *manbouncingballskintone6 __attribute__((swift_name("manbouncingballskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithballskintone2 __attribute__((swift_name("personwithballskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithballskintone3 __attribute__((swift_name("personwithballskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithballskintone4 __attribute__((swift_name("personwithballskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithballskintone5 __attribute__((swift_name("personwithballskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *personwithballskintone6 __attribute__((swift_name("personwithballskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fistskintone2 __attribute__((swift_name("fistskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fistskintone3 __attribute__((swift_name("fistskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fistskintone4 __attribute__((swift_name("fistskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fistskintone5 __attribute__((swift_name("fistskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *fistskintone6 __attribute__((swift_name("fistskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handskintone2 __attribute__((swift_name("handskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handskintone3 __attribute__((swift_name("handskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handskintone4 __attribute__((swift_name("handskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handskintone5 __attribute__((swift_name("handskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *handskintone6 __attribute__((swift_name("handskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vskintone2 __attribute__((swift_name("vskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vskintone3 __attribute__((swift_name("vskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vskintone4 __attribute__((swift_name("vskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vskintone5 __attribute__((swift_name("vskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *vskintone6 __attribute__((swift_name("vskintone6")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *writinghandskintone2 __attribute__((swift_name("writinghandskintone2")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *writinghandskintone3 __attribute__((swift_name("writinghandskintone3")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *writinghandskintone4 __attribute__((swift_name("writinghandskintone4")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *writinghandskintone5 __attribute__((swift_name("writinghandskintone5")));
@property (class, readonly) PlanetlinkCoreEmojiVariationType *writinghandskintone6 __attribute__((swift_name("writinghandskintone6")));
+ (PlanetlinkKotlinArray<PlanetlinkCoreEmojiVariationType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PlanetlinkCoreEmojiVariationType *> *entries __attribute__((swift_name("entries")));
- (PlanetlinkCoreEmojiCategoryType *)category __attribute__((swift_name("category()")));
@property (readonly, getter=category_) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *emoji __attribute__((swift_name("emoji")));
@property (readonly) NSString *expr __attribute__((swift_name("expr")));
@property (readonly) PlanetlinkInt * _Nullable level __attribute__((swift_name("level")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface PlanetlinkKotlinByteIterator : PlanetlinkBase <PlanetlinkKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PlanetlinkByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSerializedRequest")))
@interface PlanetlinkCoreSerializedRequest : PlanetlinkBase
- (instancetype)initWithAction:(PlanetlinkKotlinEnum<id> *)action __attribute__((swift_name("init(action:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAction_:(NSString *)action __attribute__((swift_name("init(action_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PlanetlinkCoreSerializedRequestCompanion *companion __attribute__((swift_name("companion")));
- (PlanetlinkCoreSerializedRequest *)addKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("add(key:value:)")));
@property NSString *action __attribute__((swift_name("action")));
@property (readonly) PlanetlinkMutableDictionary<NSString *, NSString *> *params __attribute__((swift_name("params")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol PlanetlinkKotlinAppendable
@required
- (id<PlanetlinkKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<PlanetlinkKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<PlanetlinkKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PlanetlinkKotlinx_serialization_coreEncoder
@required
- (id<PlanetlinkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PlanetlinkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PlanetlinkKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<PlanetlinkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PlanetlinkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PlanetlinkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PlanetlinkKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<PlanetlinkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<PlanetlinkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) PlanetlinkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PlanetlinkKotlinx_serialization_coreDecoder
@required
- (id<PlanetlinkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PlanetlinkKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (PlanetlinkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PlanetlinkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PlanetlinkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PlanetlinkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttributedKind")))
@interface PlanetlinkCoreAttributedKind : PlanetlinkKotlinEnum<PlanetlinkCoreAttributedKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PlanetlinkCoreAttributedKind *plain __attribute__((swift_name("plain")));
@property (class, readonly) PlanetlinkCoreAttributedKind *emoji __attribute__((swift_name("emoji")));
@property (class, readonly) PlanetlinkCoreAttributedKind *link __attribute__((swift_name("link")));
@property (class, readonly) PlanetlinkCoreAttributedKind *account __attribute__((swift_name("account")));
@property (class, readonly) PlanetlinkCoreAttributedKind *hashTag __attribute__((swift_name("hashTag")));
@property (class, readonly) PlanetlinkCoreAttributedKind *email __attribute__((swift_name("email")));
@property (class, readonly) PlanetlinkCoreAttributedKind *phone __attribute__((swift_name("phone")));
@property (class, readonly) PlanetlinkCoreAttributedKind *image __attribute__((swift_name("image")));
@property (class, readonly) PlanetlinkCoreAttributedKind *video __attribute__((swift_name("video")));
@property (class, readonly) PlanetlinkCoreAttributedKind *color __attribute__((swift_name("color")));
@property (class, readonly) PlanetlinkCoreAttributedKind *strong __attribute__((swift_name("strong")));
@property (class, readonly) PlanetlinkCoreAttributedKind *quote __attribute__((swift_name("quote")));
@property (class, readonly) PlanetlinkCoreAttributedKind *other __attribute__((swift_name("other")));
+ (PlanetlinkKotlinArray<PlanetlinkCoreAttributedKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PlanetlinkCoreAttributedKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("CoreAttributedType")))
@protocol PlanetlinkCoreAttributedType
@required
- (NSString *)displayedTextM:(id<PlanetlinkKotlinMatchResult>)m __attribute__((swift_name("displayedText(m:)")));
- (NSString *)expandedTextM:(id<PlanetlinkKotlinMatchResult>)m __attribute__((swift_name("expandedText(m:)")));
@property (readonly) PlanetlinkCoreAttributedKind *kind __attribute__((swift_name("kind")));
@property (readonly) PlanetlinkKotlinRegex *regex __attribute__((swift_name("regex")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojiType.Companion")))
@interface PlanetlinkCoreEmojiTypeCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkCoreEmojiTypeCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<PlanetlinkCoreEmojiType *> *)fromCategoryCategory:(PlanetlinkCoreEmojiCategoryType *)category __attribute__((swift_name("fromCategory(category:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojiCategoryType")))
@interface PlanetlinkCoreEmojiCategoryType : PlanetlinkKotlinEnum<PlanetlinkCoreEmojiCategoryType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PlanetlinkCoreEmojiCategoryTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *symbols __attribute__((swift_name("symbols")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *activities __attribute__((swift_name("activities")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *flags __attribute__((swift_name("flags")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *travelplaces __attribute__((swift_name("travelplaces")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *fooddrink __attribute__((swift_name("fooddrink")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *animalsnature __attribute__((swift_name("animalsnature")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *peoplebody __attribute__((swift_name("peoplebody")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *objects __attribute__((swift_name("objects")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *skintones __attribute__((swift_name("skintones")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *smileysemotion __attribute__((swift_name("smileysemotion")));
@property (class, readonly) PlanetlinkCoreEmojiCategoryType *custom __attribute__((swift_name("custom")));
+ (PlanetlinkKotlinArray<PlanetlinkCoreEmojiCategoryType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PlanetlinkCoreEmojiCategoryType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojiVariationType.Companion")))
@interface PlanetlinkCoreEmojiVariationTypeCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkCoreEmojiVariationTypeCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<PlanetlinkCoreEmojiVariationType *> *)fromCategoryCategory:(PlanetlinkCoreEmojiCategoryType *)category __attribute__((swift_name("fromCategory(category:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSerializedRequest.Companion")))
@interface PlanetlinkCoreSerializedRequestCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkCoreSerializedRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<PlanetlinkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PlanetlinkKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PlanetlinkKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PlanetlinkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PlanetlinkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PlanetlinkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PlanetlinkKotlinx_serialization_coreSerializersModule : PlanetlinkBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PlanetlinkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PlanetlinkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PlanetlinkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PlanetlinkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PlanetlinkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PlanetlinkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PlanetlinkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PlanetlinkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PlanetlinkKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PlanetlinkKotlinx_serialization_coreSerialKind : PlanetlinkBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PlanetlinkKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PlanetlinkKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PlanetlinkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PlanetlinkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PlanetlinkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PlanetlinkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PlanetlinkKotlinNothing : PlanetlinkBase
@end

__attribute__((swift_name("KotlinMatchResult")))
@protocol PlanetlinkKotlinMatchResult
@required
- (id<PlanetlinkKotlinMatchResult> _Nullable)next __attribute__((swift_name("next()")));
@property (readonly) PlanetlinkKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<PlanetlinkKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) PlanetlinkKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface PlanetlinkKotlinRegex : PlanetlinkBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<PlanetlinkKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(PlanetlinkKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PlanetlinkKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<PlanetlinkKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<PlanetlinkKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (id<PlanetlinkKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<PlanetlinkKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<PlanetlinkKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
- (id<PlanetlinkKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<PlanetlinkKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojiCategoryType.Companion")))
@interface PlanetlinkCoreEmojiCategoryTypeCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkCoreEmojiCategoryTypeCompanion *shared __attribute__((swift_name("shared")));
- (PlanetlinkCoreEmojiCategoryType *)ofCode:(NSString *)code __attribute__((swift_name("of(code:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PlanetlinkKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PlanetlinkKotlinKClass>)kClass provider:(id<PlanetlinkKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PlanetlinkKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PlanetlinkKotlinKClass>)kClass serializer:(id<PlanetlinkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PlanetlinkKotlinKClass>)baseClass actualClass:(id<PlanetlinkKotlinKClass>)actualClass actualSerializer:(id<PlanetlinkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PlanetlinkKotlinKClass>)baseClass defaultDeserializerProvider:(id<PlanetlinkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PlanetlinkKotlinKClass>)baseClass defaultDeserializerProvider:(id<PlanetlinkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PlanetlinkKotlinKClass>)baseClass defaultSerializerProvider:(id<PlanetlinkKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PlanetlinkKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PlanetlinkKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PlanetlinkKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PlanetlinkKotlinKClass <PlanetlinkKotlinKDeclarationContainer, PlanetlinkKotlinKAnnotatedElement, PlanetlinkKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface PlanetlinkKotlinMatchResultDestructured : PlanetlinkBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<PlanetlinkKotlinMatchResult> match __attribute__((swift_name("match")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol PlanetlinkKotlinIterable
@required
- (id<PlanetlinkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol PlanetlinkKotlinCollection <PlanetlinkKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol PlanetlinkKotlinMatchGroupCollection <PlanetlinkKotlinCollection>
@required
- (PlanetlinkKotlinMatchGroup * _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface PlanetlinkKotlinIntProgression : PlanetlinkBase <PlanetlinkKotlinIterable>
@property (class, readonly, getter=companion) PlanetlinkKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (PlanetlinkKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol PlanetlinkKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol PlanetlinkKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface PlanetlinkKotlinIntRange : PlanetlinkKotlinIntProgression <PlanetlinkKotlinClosedRange, PlanetlinkKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PlanetlinkKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(PlanetlinkInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(PlanetlinkInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) PlanetlinkInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) PlanetlinkInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) PlanetlinkInt *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface PlanetlinkKotlinRegexOption : PlanetlinkKotlinEnum<PlanetlinkKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PlanetlinkKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) PlanetlinkKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) PlanetlinkKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) PlanetlinkKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) PlanetlinkKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) PlanetlinkKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) PlanetlinkKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (PlanetlinkKotlinArray<PlanetlinkKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PlanetlinkKotlinRegexOption *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface PlanetlinkKotlinRegexCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (PlanetlinkKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol PlanetlinkKotlinSequence
@required
- (id<PlanetlinkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface PlanetlinkKotlinMatchGroup : PlanetlinkBase
- (instancetype)initWithValue:(NSString *)value range:(PlanetlinkKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (PlanetlinkKotlinMatchGroup *)doCopyValue:(NSString *)value range:(PlanetlinkKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PlanetlinkKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface PlanetlinkKotlinIntProgressionCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (PlanetlinkKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface PlanetlinkKotlinIntIterator : PlanetlinkBase <PlanetlinkKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PlanetlinkInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface PlanetlinkKotlinIntRangeCompanion : PlanetlinkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PlanetlinkKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PlanetlinkKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
