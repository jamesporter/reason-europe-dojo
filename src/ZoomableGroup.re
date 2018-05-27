[@bs.deriving abstract]
type zoomableGroupProps = {
  center: list(int),
  disablePanning: bool,
};

[@bs.module "react-simple-maps"]
external zoomableGroup : ReasonReact.reactClass = "ZoomableGroup";

let make = (~center, ~disablePanning, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=zoomableGroup,
    ~props=zoomableGroupProps(~center, ~disablePanning),
    children,
  );