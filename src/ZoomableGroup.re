[@bs.deriving abstract]
type zoomableGroupProps = {className: string};

[@bs.module "react-simple-maps"]
external zoomableGroup : ReasonReact.reactClass = "ZoomableGroup";

let make = children =>
  ReasonReact.wrapJsForReason(
    ~reactClass=zoomableGroup,
    ~props=Js.Obj.empty(),
    children,
  );